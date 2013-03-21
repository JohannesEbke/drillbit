#include <unordered_map>
#include <sstream>
#include <vector>

#include <google/protobuf/descriptor.h>
#include <google/protobuf/message.h>

using google::protobuf::Message;
using google::protobuf::FieldDescriptor;

class ColumnWriter {
public:
    ColumnWriter()
        : _parent(NULL), _repeated_depth(0), _fd(NULL), _version(0), _definition_level(0)
    {}

    ColumnWriter(ColumnWriter* p, int d, const FieldDescriptor* fd, int v, int dl)
        : _parent(p), _repeated_depth(d), _fd(fd), _version(v), _definition_level(dl)
    {
        ColumnWriter* pr = _parent;
        while (pr != NULL) {
            _parent_version.push_back(0);
            pr = pr->_parent;
        }
    }

    ColumnWriter* _parent;
    int _repeated_depth;
    int repeated_depth() { return _repeated_depth; }

    const FieldDescriptor* _fd;

    int _version;
    std::vector<int> _parent_version;
    int _definition_level;

    std::vector<std::pair<int, int>> _repdefs;
    std::unordered_map<const FieldDescriptor*, ColumnWriter*> _writers;
    std::stringstream _data;


    ColumnWriter& get(const FieldDescriptor* fd) {
        auto*& x = _writers[fd];

        if (x == NULL) {
            int dl = _definition_level;
            if (!fd->is_required())
                dl += 1;
            int crepeated_depth = repeated_depth();
            if (fd->is_repeated())
                crepeated_depth += 1;

            x = new ColumnWriter(this, crepeated_depth, fd, 0, dl);
        }

        return *x;
    }

    void sync_to_parent(bool finalize=false) {
        
        ColumnWriter* p = _parent;
        int d = 0;
        while (p != NULL) {
            for (int i = finalize ? 0 : 1; i < p->_version - _parent_version[d]; i++) {
                if (p->_definition_level == 0)
                    continue;
                _data << "  r: " << p->_repeated_depth - (finalize ? 1 : 0)
                      << " d: " << p->_definition_level << " -- NULL -- " << std::endl;
            }
            _parent_version[d] = p->_version;
            p = p->_parent;
            d++;
        }
        
    }

    void WriteRepeated(const Message& msg, int i, int rl) {
        sync_to_parent();
        _data << "  r: " << rl << " d: " << _definition_level
              << " c: " << i << "th value of " << _fd->name() << " of " << msg.DebugString() << std::endl;
    }

    void Write(const Message& msg, int rl) {
        sync_to_parent();
        _data << "  r: " << rl << " d: " << _definition_level
              << " c: " << _fd->name() << " of " << msg.DebugString() << std::endl;
    }

    void Finalize() {
        sync_to_parent(true);
        for(auto& w : _writers) {
            w.second->Finalize();
        }
    }

    void Dump() {
        if (_writers.empty()) {
            if (_fd)
                std::cout << _fd->full_name() << std::endl;
            else
                std::cout << "<< Message root >>" << std::endl;
            std::cout << _data.str() << std::endl;
        }
        for(auto& w : _writers) {
            w.second->Dump();
        }
    }
};

void dissect_record(const Message & msg, ColumnWriter & writer,
    unsigned int repetition_level=0) {

    const auto& r = *msg.GetReflection();

    std::vector<const FieldDescriptor*> fields;
    r.ListFields(msg, &fields);

    writer._version++;

    for(const auto* fd : fields) {
        ColumnWriter& child_writer = writer.get(fd);

        unsigned int child_repetition_level = repetition_level;

        if (fd->is_repeated()) {
            const int N = r.FieldSize(msg, fd);
            for (int i = 0; i < N; i++) {
                if (i != 0) {
                    child_repetition_level = child_writer.repeated_depth();
                }

                if (fd->type() != FieldDescriptor::TYPE_MESSAGE) {
                    child_writer.WriteRepeated(msg, i, child_repetition_level);
                } else {
                    const auto& child = r.GetRepeatedMessage(msg, fd, i);
                    dissect_record(child, child_writer, child_repetition_level);
                }
            }
        } else
        {
            if (fd->type() != FieldDescriptor::TYPE_MESSAGE) {
                child_writer.Write(msg, child_repetition_level);
            } else {
                const auto& child = r.GetMessage(msg, fd);
                dissect_record(child, child_writer, child_repetition_level);
            }
        }


    }
}
