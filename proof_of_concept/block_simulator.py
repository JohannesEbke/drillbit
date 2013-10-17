#! /usr/bin/env python

from collections import defaultdict
from glob import glob
from os.path import basename, dirname, join as pjoin
from pprint import pprint

def main():

    class DitPack(object):
        def __init__(self, directory):
            self.ditfiles = glob(pjoin(directory, "*.dit"))
            self.block_ids = open(pjoin(directory, "block_ids")).read().split()
            self.columns = [basename(path) for path in self.ditfiles]

        def __hash__(self):
            me = (self.ditfiles, self.block_ids, self.columns)
            x = tuple(map(tuple, me))
            return hash(x)

        def __iter__(self):
            return iter(self.block_ids)

    class FakePack(DitPack):
        def __init__(self, columns, block_ids):
            self.columns, self.block_ids = columns, block_ids
            self.ditfiles = ["missingdata({0}, {1})".format(block_ids, c)
                             for c in columns]
    # (Except there is one missing)
    #input_files = glob("ditsplit/*/*.dit") + glob("ditsplit/*.dit")
    input_packs = [DitPack(g) for g in glob("ditsplit/?") + glob("ditsplit/??")]
    input_packs.append(DitPack("ditsplit"))

    seen = set()
    columns = set()
    column_pack = defaultdict(set)

    for pack in input_packs:
        seen |= set(pack.block_ids)
        columns |= set(pack.columns)
        for column in pack.columns:
            column_pack[column].add(pack)

    column_sets = defaultdict(set)

    for column in columns:
        packs = frozenset(column_pack[column])
        column_sets[packs].add(column)

    for pack_set, columns in sorted(column_sets.iteritems()):
        block_ids_for_columns = set().union(*[p.block_ids for p in pack_set])
        missing = seen - block_ids_for_columns
        if missing:
           print "Missing block ids {0} for {1}".format(missing, sorted(columns))
           fp = FakePack(columns, missing)
           for column in columns:
               column_pack[column] = fp

    from heapq import heappush, heappop

    block_ids_packs_by_column = {}
    column_set = set(column_sets.values())

    for packs, column_set in column_sets.iteritems()
        block_id_pack = []
        for pack in packs:
            block_id_pack.extend((block_id, pack) for block_id in pack.block_ids)
        block_id_pack.sort()
        for column in column_set:
            block_ids_packs_by_column[column] = block_id_pack

    def g():
        reader_map = {}
        for block_id in block_ids:
            reader_map = {}
            for column in column_sets:

            yield block,reader_map

    for block_id, reader_map in g():
        print block_id
        pprint(sorted(get_readers(reader_map)))



    def get_readers(columns, block_id):
        return [group_by_columns[c][block_id] for c in columns]



    return

    group_by_columns = defaultdict(dict)

    seen = set()
    for path in input_files:
        block_id = (dirname(path))
        seen.add(block_id)
        group_by_columns[basename(path)][block_id] = path

    columns = sorted(set(group_by_columns))

    for column, block_id_map in group_by_columns.iteritems():
        missing = (seen - set(block_id_map.keys()))
        if missing:
            print "Column {0} is missing blocks: {1}".format(column, missing)
        for m in missing:
            block_id_map[m] = "fakereader({0}, {1})".format(m, column)

    #pprint(dict(group_by_columns))

    def get_readers(columns, block_id):
        return [group_by_columns[c][block_id] for c in columns]

    for block_id in sorted(seen):
        print block_id
        pprint(get_readers(columns, block_id))

    return
"""


    ["ph_"]


    blockid_map = {
        "file1.root:photon/ph_pt": "block_id"
    }

    f(block) -> blockid

    f("file*.root", "photon", "ph_pt") -> [block]

    data_description = auto_wiring(files, configuration)

#    data_description -> {
#        "ph_pt": [colr("file1.root", "photon", "ph_pt"), ],
#        "ph_eta": [colr("file2.root", "photon", "ph_eta"), cor]
#    }

    class ColumnBlockReaders(list):
        def read_event():
            pass

    class ColumnBlockReader(object):
        def read_event():
            pass

    ditsplit/1/*.dit
    ditsplit/2/*.dit

    ph_pt = ColumnBlockReaders(
            [CBR("ditsplit/1/ph_pt.dit"), CBR("ditsplit/2/ph_pt.dit"), CBR()])

    ph_eta = ColumnBlockReaders(CBR(1), EmptyCBR(2))

    data_description = [ph_pt]
    process(data_description)

    ph_pt = CBRS({"blockid": lambda: CBR()})

    f(ph_pt, ph_eta) -> events

    def f(*cbrs):
        for cbr in cbrs:
            for blockid, cr_maker in cbr:
                cr = cr_maker()

    f(information) -> x

    {"blockid": {"ph_pt": }

    {
            colr("file.root", ""): ["blockid"]
            }
"""

if __name__ == "__main__":
    main()
