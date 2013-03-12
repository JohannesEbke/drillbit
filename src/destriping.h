#include <unordered_map>
#include <sstream>
#include <vector>

#include <google/protobuf/descriptor.h>
#include <google/protobuf/message.h>

using google::protobuf::Message;
using google::protobuf::FieldDescriptor;

#include <a4/dynamic_message.h>
using a4::io::FieldContent;




struct ColumnLine {
    ColumnLine(unsigned int r, unsigned int d, std::string v) : repetition_level(r), definition_level(d), value(v) {};
    unsigned int repetition_level, definition_level;
    std::string value;
};

class FieldReader {
    public:
    FieldReader(FieldReader * p, const FieldDescriptor* fd) : _parent(p), _fd(fd), _position(0) {
        if (p == NULL) {
            _definition_level = 0;
            _level = 0;
            _max_repetition_level = 0;
        } else {
            _level = p->_level + 1;
            if (fd->is_repeated()) {
                _max_repetition_level = p->_max_repetition_level + 1;
            } else {
                _max_repetition_level = p->_max_repetition_level;
            }
            if (!fd->is_required()) {
                _definition_level = p->_definition_level + 1;
            } else {
                _definition_level = p->_definition_level;
            }
        }
    }
    public:

    FieldReader* _parent;
    const FieldDescriptor * _fd;
    int _level;
    int _definition_level;
    int _position;
    int _max_repetition_level;
    std::vector<ColumnLine> _data;

    const ColumnLine& read() {
        return _data[_position++];
    }

    bool has_data() {
        return _data.size() > _position;
    }

    unsigned int definition_level() {
        return _definition_level;
    }

    unsigned int level() { // called full definition level in the paper
        return _level;
    }

    unsigned int peek_repetition_level() {
        if (has_data()) {
            return _data[_position].repetition_level;
        } else {
            return 0;
        }
    }

    std::string name() {
        if (_fd == NULL) {
            return "root";
        } else {
            return _parent->name() + "." + _fd->name();
            //return _fd->full_name();
        }
    }
    std::string short_name() {
        if (_fd == NULL) {
            return "root";
        } else {
            return _fd->name();
        }
    }
    bool needs_braces() {
        if (not _fd) return true;
        return _fd->type() == FieldDescriptor::TYPE_MESSAGE;
    }
};

#define FSM_END (FieldReader*)0x1
FieldReader * last_reader; // last reader where value was read. Convention: The <tag> of this reader must be OPEN
std::stringstream record;


FieldReader* lowest_common_ancestor(FieldReader* r1, FieldReader* r2) {
    //std::cout << "Lowest common ancestor of " << r1 << " and " << r2 << " is... " << std::endl;
    //std::cout << "Levels " << r1->level() << " and " << r2->level() << " is... " << std::endl;
    // go up to the common level
    while (r1->_level < r2->_level) r2 = r2->_parent;
    while (r2->_level < r1->_level) r1 = r1->_parent;
    while (r1 != r2) {
        r1 = r1->_parent;
        r2 = r2->_parent;
    }
    //std::cout << "..." << r1 << std::endl;
    return r1;
}

class ColumnReader {
    public:
    FieldReader * root_field_reader;
    std::vector<FieldReader*> readers;
    std::map<std::pair<FieldReader*,int>, FieldReader*> fsm_transitions;

    void make_fsm() {
        for(int i = 0; i < readers.size(); i++) {
            auto* reader = readers[i];
            unsigned int max_level = reader->_max_repetition_level;
            std::cout << "Looking at reader " << reader->name() << ", max-repetition level " << max_level << std::endl;
            FieldReader * barrier = (i == readers.size()-1) ? FSM_END : readers[i+1]; // next field after field or final FSM state otherwise

            if (barrier != FSM_END) {
                std::cout << "...its barrier is " << barrier->name();
            } else {
                std::cout << "...its barrier is THE END";
            }
            unsigned int barrier_level = 0;
            if (barrier != FSM_END) {
                auto* lca = lowest_common_ancestor(readers[i], barrier);
                barrier_level = lca->_max_repetition_level;
                std::cout << "... the lca between this and the barrier is " << lca->name() << " and its level is " << barrier_level << std::endl;
            }
            //for(int j = i-1; j >= 0; j--) {
            //for(int j = 0; j < i; j++) {
            for(int j = i; j >= 0; j--) {
            //for(int j = 0; j <= i; j++) {
                if (readers[j]->_max_repetition_level > barrier_level) {
                    std::cout << "... Reader " << readers[j]->name() << " with its level " << readers[j]->_max_repetition_level 
                              << " has climbed the barrier!" << std::endl;
                    auto* lca = lowest_common_ancestor(readers[j], readers[i]);
                    unsigned int back_level = lca->_max_repetition_level;
                    std::cout << ".... the LCA of these is " << lca->name() << " with its level " << back_level << std::endl; 
                    fsm_transitions[std::make_pair(readers[i], back_level)] = readers[j];
                }
            }
            for(int level = barrier_level+1; level <= max_level; level++) {
                FieldReader* &target = fsm_transitions[std::make_pair(readers[i], level)];
                if (not target) {
                    target = fsm_transitions[std::make_pair(readers[i], level-1)];
                    std::cout << "... propagating level " << level-1 << " to level " << level << " with its target of " << target->name() << std::endl;
                }
            }
            for (int level = 0; level < barrier_level+1; level++) {
                fsm_transitions[std::make_pair(readers[i], level)] = barrier;
                    std::cout << "... filling hole at " << level << " with the barrier." << std::endl;
            }
        }
        std::cout << "FSM Transitions:" << std::endl;
        foreach(auto kv, fsm_transitions) {
            if (kv.first.first->_fd == NULL) {
                std::cout << kv.first.first;
            } else {
                std::cout << kv.first.first->name();
            }
            std::cout << ", " << kv.first.second << " --> ";;
            if (kv.second == FSM_END) {
                std::cout << " -- END -- ";
            } else if (kv.second->_fd == NULL) {
                std::cout << kv.second;
            } else {
                std::cout << kv.second->name();
            }
            std::cout << std::endl;
        }
        std::cout << ".............." << std::endl;
    }
};
        
void end_nested_records(FieldReader* r, int level) {
    std::cout << "end_nested_records of " << r->name() << ":" << r->level() << std::endl;
    if (not r->needs_braces()) {
        record << "\"" << std::endl;
        return;
    }
    for (int i = 0; i < level; i++) record << " ";
    if (r)
        record << "} " << std::endl;
    else 
        record << "} (NULL record!?)" << std::endl;
}

void start_nested_records(FieldReader* r, int level) {
    std::cout << "start_nested_records of " << r->name() << ":" << r->level() << std::endl;
    for (int i = 0; i < level; i++) record << " ";
    if (not r->needs_braces()) {
        record << r->short_name() << ": \"";
    } else {
        record << r->short_name() << "{" << std::endl;
    }
}

void MoveToLevel(int newLevel, FieldReader * nextReader) {
    auto* lca = lowest_common_ancestor(last_reader, nextReader);
    int via_level = lca->level(); 
    FieldReader * r = last_reader;
    int current_level = last_reader->level();
    std::cout << "Moving from " << last_reader->name() << " to level " << newLevel << " of the reader " 
              << nextReader->name() << " via " << lca->name() << " level " << via_level << std::endl;
    
    while (r->level() > via_level) {
        end_nested_records(r, r->level());
        r = r->_parent;
    }
    current_level = r->level();
    while (r->level() < newLevel) {
        current_level++;
        r = nextReader;
        for (int i = 0; i < (nextReader->level() - current_level); i++) r = r->_parent;
        start_nested_records(r, r->level());
    }
    last_reader = r;
}

void ReturnToLevel(int newLevel, FieldReader * nextReader) {
    FieldReader * r = last_reader;
    int current_level = last_reader->level();
    std::cout << "ReturnToLevel " << current_level << " --> " << newLevel << std::endl;
    while (current_level > newLevel) {
        end_nested_records(r, current_level);
        r = r->_parent;
        current_level--;
    }
    if (current_level == newLevel) {
        end_nested_records(r, current_level);
        //last_reader = r->_parent;
    }
    last_reader = nextReader->_parent;
}

std::string AssembleRecord(ColumnReader * creaders) {
    record.clear();
    last_reader = creaders->root_field_reader;
    start_nested_records(creaders->root_field_reader, 0);
    FieldReader* reader = creaders->readers[0];
    std::cout << "Starting with reader " << reader->name() << std::endl;
    while (reader != FSM_END) {
        std::cout << "Looking at reader " << reader->name() << " which has level " << reader->level() << std::endl;
        if (not reader->has_data()) {
            //std::cout << "No data left in reader, moving to level " << reader->level() << std::endl;
            //MoveToLevel(reader->level(), reader);
            reader = creaders->fsm_transitions[std::make_pair(reader, 0)];
            continue;
        }
        const ColumnLine &l = reader->read();
        std::cout << "Read line r:" << l.repetition_level << " l:" << l.definition_level << " v:" << l.value << std::endl;
        bool value_is_not_null = (l.definition_level == reader->definition_level());
        if (value_is_not_null) {
            std::cout << "value is not null, moving to level " << reader->level() << std::endl;
            //MoveToLevel(reader->definition_level(), reader);
            MoveToLevel(reader->level(), reader);
            //for (int i = 0; i < reader->level(); i++) record << " ";
            //record << reader->short_name()  << ": " << l.value << std::endl;
            record << l.value;
           // << std::endl;
            std::cout << "Value: " << reader->short_name()  << ": " << l.value << std::endl;
        } else {
            std::cout << "Value is null!" << std::endl;
            MoveToLevel(l.definition_level, reader);
            //MoveToLevel(reader->level(), reader);
            //MoveToLevel(reader->definition_level(), reader);
        }

        std::cout << "FSM - " << reader->name() << " r: " << reader->peek_repetition_level() << std::endl;
        reader = creaders->fsm_transitions[std::make_pair(reader, reader->peek_repetition_level())]; // EXPERIMENT

        //std::cout << "FSM - " << reader->name() << " r: " << l.repetition_level << std::endl;
        //reader = creaders->fsm_transitions[std::make_pair(reader, l.repetition_level)];

        if (reader == FSM_END) {
            std::cout << "Hit FSM END!" << std::endl;
            break;
        }
        std::cout << reader << std::endl;
        std::cout << "FSM transition to reader " << reader->name() << ", returning to level " << reader->definition_level() << std::endl;
        //ReturnToLevel(reader->definition_level());
        ReturnToLevel(reader->level(), reader);
        //ReturnToLevel(l.definition_level);
    }
    std::cout << "Finished record, returning to level 0." << std::endl;
    ReturnToLevel(0, creaders->root_field_reader); //End all nested records (implicit)
    return record.str();
}


