#!/usr/bin/env python

from array import array

array_type_dict = {
    "Bool_t"  : "B",
    "Float_t" : "f",
    "Int_t"   : "i",
    "UInt_t"  : "I",
    "double"  : "d",
    "float"   : "f",
    "int"     : "i",
    "short"   : "h",
    "unsigned int" : "I",
    "unsigned short" : "H",
    }

def dump_required_lvl0(tree, leaf, f):
    tree.SetBranchStatus("*", 0)
    tree.SetBranchStatus(leaf.GetBranch().GetName(), 1)
    print "Dump ", leaf.GetName()
    array_type = array_type_dict[leaf.GetTypeName()]
    #tree.Draw(leaf.GetName())
    array(array_type, [e.__getattr__(leaf.GetName()) for e in tree]).tofile(f)

def dump(tree):
    global res
    leaves = list(tree.GetListOfLeaves())
    print len(leaves)
    print sorted(set(l.GetTypeName() for l in leaves))
    for l in leaves[:10]:
        if l.GetTypeName().startswith("vector<"):
            pass
        else:
            f = file("dit/" + l.GetName() + ".dit", "wb")
            dump_required_lvl0(tree, l, f)
            f.close()
        
if __name__=="__main__":
    from argparse import ArgumentParser
    parser = ArgumentParser(description='Experimental Column Dumper')
    arg = parser.add_argument

    arg('rootfile', nargs='+', help="Root files to dump")
    arg('--tree', default="photon", help="Tree to use")

    args = parser.parse_args()

    from ROOT import TChain
    c = TChain(args.tree)
    for f in args.rootfile:
        c.Add(f)

    dump(c)
    
