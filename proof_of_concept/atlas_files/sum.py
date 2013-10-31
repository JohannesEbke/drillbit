from cPickle import load
from glob import glob
from collections import defaultdict
from pprint import pprint

def dict_sum(defdicts):
    res = defaultdict(lambda: 0)
    keys = set()
    for d in defdicts:
        keys.update(d.keys())
        for k in keys:
            res[k] += d.get(k, 0)
    return dict(res)

def count_stuff(filename):
    d = load(file(filename))
    runs = d['Run']
    counts = defaultdict(lambda: 0)
    for run in runs:
        for ds in d[run]['Datasets']:
            for x in ds['value']:
                tag = ".".join(x[0].split('.')[-3:-1])
                counts['files'] += x[4]
                counts['files:' + tag] += x[4]
                if x[6]:
                    counts['events.in:' + tag] += x[6]
                    counts['events.with.duplicates'] += x[6]
                if x[5]:
                    counts['filesize:' + tag] += x[5]
                    counts['total.filesize'] += x[5]
                    if tag.startswith('merge'):
                        counts['total.merged.filesize'] += x[5]
                    if tag.startswith('physics'):
                        counts['total.physics.filesize'] += x[5]
                    if tag.startswith('recon'):
                        counts['total.recon.filesize'] += x[5]
    return dict(counts)

def get_events_in_files(filename):
    d = load(file(filename))
    runs = d['Run']
    return sum(sum(sum(x[6] for x in ds['value'] if x[6]) for ds in d[run]['Datasets']) for run in runs)

def get_events(filename):
    d = load(file(filename))
    runs = d['Run']
    return sum(sum(int(ds['value']) for ds in d[run]['#Events'] if ds['value'] != 'n.a.' and ds['accepted']) for run in runs)

what = ""
func = count_stuff
#print what + " in 2008: "
#pprint( func("runquery-2008.pickle"))
#print what + " in 2009: "
#pprint( func("runquery-2009.pickle"))
#print what + " in 2010: "
#pprint( dict_sum(func(x) for x in glob("runquery-2010-*.pickle")))
#print what + " in 2011: "
#pprint( func("runquery-2011.pickle"))
#print what + " in 2012: "
#pprint( func("runquery-2012.pickle"))
#print what + " in 2013: "
#pprint( func("runquery-2013-1.pickle"))
#print what + " sum: "
pprint( dict_sum(func(x) for x in glob('*.pickle')))
