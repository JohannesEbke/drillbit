from dispatch_simulator import DitPackSet, EmptyDitPack
from pprint import pprint

def as_cols(lst):
    return ["Column_{}".format(i) for i in lst]

def as_tabs(lst):
    return ["Tablet_{}".format(i) for i in lst]

def test_simple():
    input_packs = [EmptyDitPack(as_cols(range(3)), as_tabs(range(10)))]
    packset = DitPackSet(input_packs)

    for tablet, readers in packset.readers_by_tablet():
        print tablet
        pprint(readers)

def test_massive():
    input_packs = [EmptyDitPack(as_cols(range(10000)), as_tabs(range(1000)))]
    packset = DitPackSet(input_packs)

    for i, (tablet, readers) in enumerate(packset.readers_by_tablet()):
        if i%1000 == 0:
            print i, tablet
            pass

def main():
    test_simple()
    test_massive()

if __name__ == "__main__":
    main()

