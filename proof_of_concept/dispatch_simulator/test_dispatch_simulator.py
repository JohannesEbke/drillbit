#! /usr/bin/env python

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
    input_packs = [EmptyDitPack(as_cols(range(10000)), as_tabs(range(1000*1000)))]
    packset = DitPackSet(input_packs)

    for i, (tablet, readers) in enumerate(packset.readers_by_tablet()):
        if i%100000 == 0:
            print i, tablet
            pass

def test_multi():
    input_packs = [EmptyDitPack(as_cols(range(0,  5)), as_tabs(range(0, 5))),
                   EmptyDitPack(as_cols(range(6, 10)), as_tabs(range(0, 5))),
                   EmptyDitPack(as_cols(range(0,  5)), as_tabs(range(5, 10))),
                   EmptyDitPack(as_cols(range(5, 10)), as_tabs(range(5, 10)))]
    packset = DitPackSet(input_packs)

    for tablet, readers in packset.readers_by_tablet():
        print tablet
        pprint(readers)

def test_multi_massive():
    n_tablets = 1000*1000
    input_packs = [EmptyDitPack(as_cols(range(0,  5000)), as_tabs(range(0, n_tablets))),
                   EmptyDitPack(as_cols(range(5010, 10000)), as_tabs(range(0, n_tablets))),
                   EmptyDitPack(as_cols(range(0,  4000)), as_tabs(range(n_tablets, 2*n_tablets))),
                   EmptyDitPack(as_cols(range(4010, 10000)), as_tabs(range(n_tablets, 2*n_tablets)))]
    packset = DitPackSet(input_packs)

    for i, (tablet, readers) in enumerate(packset.readers_by_tablet()):
        if i%100000 == 0:
            print i, tablet
            pass

def test_many_massive():
    input_packs = []

    COLUMN_GROUPS = 10
    COLUMNS_PER_FILE = 1000

    TABLET_GROUPS = 1000
    TABLETS_PER_FILE = 10
    
    print "Running dispatching over", COLUMN_GROUPS*TABLET_GROUPS, "virtual files, each containing", COLUMNS_PER_FILE,
    print "columns and", TABLETS_PER_FILE, "tablets (event groups), plus one file containing one column for all tablets."
    print "Expected: Warnings about 10 tablets missing for one column, and 1 tablet missing for 1 column."
    print "-"*80

    for i in range(COLUMN_GROUPS):
        common_columns = as_cols(range(i*COLUMNS_PER_FILE,  (i+1)*COLUMNS_PER_FILE))
        for j in range(TABLET_GROUPS):
            tablets = as_tabs(range(TABLETS_PER_FILE*j, TABLETS_PER_FILE*(j+1)))
            if i == 3 and j == 234:
                # This particular file is missing a column (note the COLUMNS_PER_FILE+1 instead of COLUMNS_PER_FILE)
                columns = as_cols(range(i*COLUMNS_PER_FILE+1,  COLUMNS_PER_FILE*(i+1)))
                input_packs.append(EmptyDitPack(columns, tablets))
            else:
                input_packs.append(EmptyDitPack(common_columns, tablets))

    # Extra column that spans all tablets except the last one
    tablets = as_tabs(range(0, TABLETS_PER_FILE * TABLET_GROUPS - 1))
    columns = as_cols([COLUMNS_PER_FILE * COLUMN_GROUPS])
    input_packs.append(EmptyDitPack(columns, tablets))

    packset = DitPackSet(input_packs)

    for i, (tablet, readers) in enumerate(packset.readers_by_tablet()):
        # Dispatch one job here
        pass


def main():
    test_many_massive()

if __name__ == "__main__":
    main()

