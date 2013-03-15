#ifndef ROOT_DICTIONARIES_H_
#define ROOT_DICTIONARIES_H_

class TTree;

void ensure_dictionary(const char *class_name);
void ensure_dictionaries(TTree *tree);

#endif
