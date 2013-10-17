#! /usr/bin/env python

from collections import defaultdict
from glob import glob
from os.path import basename, dirname, join as pjoin


class DirectoryDitPack(object):
    def __init__(self, directory):
        self._ditfiles = glob(pjoin(directory, "*.dit"))
        self.tablets = open(pjoin(directory, "tablets")).read().split()
        self.columns = [basename(path) for path in self._ditfiles]
        self._current_tablet_offset = defaultdict(lambda: -1)

    def next_reader(self, column):
        self._current_tablet_offset[column] += 1
        return (id(self), column, self.tablets[self._current_tablet_offset[column]])
    
    def skip_next_reader(self, column):
        self._current_tablet_offset[column] += 1


class EmptyDitPack(DirectoryDitPack):
    def __init__(self, columns, tablets):
        self.columns, self.tablets = columns, tablets
        self._ditfiles = ["foo"]#["missingdata({0}, {1})".format(tablets, c)
                                #for c in columns]
        self._current_tablet_offset = defaultdict(lambda: -1)


class DitPackSet(object):
    def __init__(self, packs):
        self._packs = packs

        self.seen_tablets = set()
        self.seen_columns = set()
        self.packset_for_column = defaultdict(set)
        self.columnset_for_packset = defaultdict(set)

        for pack in self._packs:
            self.seen_tablets |= set(pack.tablets)
            self.seen_columns |= set(pack.columns)
            for column in pack.columns:
                self.packset_for_column[column].add(pack)

        for column in self.columns:
            packs = frozenset(self.packset_for_column[column])
            self.columnset_for_packset[packs].add(column)

    @property
    def columns(self):
        return sorted(self.seen_columns)
    
    @property
    def tablets(self):
        return sorted(self.seen_tablets)

    def missing_tablets_by_columnset(self):
        for packset, columnset in sorted(self.columnset_for_packset.iteritems()):
            tablets_for_columnset = set().union(*[p.tablets for p in packset])
            missing = self.seen_tablets - tablets_for_columnset
            if missing:
                yield (columnset, missing)

    def add(self, pack):
        for column in pack.columns:
            self.packset_for_column[column] = set((pack))
        self.columnset_for_packset[frozenset((pack))] = frozenset(pack.columns)
    
    def add_missing(self):
        for columnset, tablets in self.missing_tablets_by_columnset():
            print "Missing tablet ids {0} for {1}".format(tablets, sorted(columnset))
            fp = EmptyDitPack(columnset, tablets)
            self.add(fp)

    def ordered_packs_by_columnset(self):
        tablets_packs_by_columnset = {}
        for packs, column_set in self.columnset_for_packset.iteritems():
            tablet_pack = []
            for pack in packs:
                tablet_pack.extend((tablet, pack) for tablet in pack.tablets)
            tablet_pack.sort(reverse=True)
            tablets_packs_by_columnset[frozenset(column_set)] = tablet_pack
        return tablets_packs_by_columnset

    def readers_by_tablet(self):
        ordered_packs_by_columnset = self.ordered_packs_by_columnset()
        for tablet in sorted(self.tablets):
            readers = {}
            for columnset, pack_stack in ordered_packs_by_columnset.iteritems():
                while True:
                    read_tablet, pack = pack_stack.pop()
                    if read_tablet == tablet:
                        for column in columnset:
                            readers[column] = pack.next_reader(column)
                        break
                    elif read_tablet > tablet:
                        # skip next reader
                        for column in columnset:
                            pack.skip_next_reader(column)
                    else:
                        raise Exception("Missing Tablet {0} in columnset {1}".format(tablet, columnset))
            yield (tablet, readers)
