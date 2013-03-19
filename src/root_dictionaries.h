#ifndef ROOT_DICTIONARIES_H_
#define ROOT_DICTIONARIES_H_

class TTree;
class TLeaf;

void ensure_dictionary(const char *class_name);
void ensure_dictionary(TLeaf *leaf);
void ensure_dictionaries(TTree *tree);

#endif
