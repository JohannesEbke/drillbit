from dispatch_simulator import DitPackSet, EmptyDitPack
from pprint import pprint

def as_cols(lst):
    return ["Column_{}".format(i) for i in lst]

def as_tabs(lst):
    return ["Tablet_{}".format(i) for i in lst]

def test_simple():
    input_packs = [EmptyDitPack(as_cols(range(10)), as_tabs(range(10)))]
    packset = DitPackSet(input_packs)
    for tablet, readers in packset.readers_by_tablet():
        print tablet
        pprint(readers)


