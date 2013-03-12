import os
import time
files = os.listdir("dit")
bunches = [files[i*1000:(i+1)*1000] for i in range((len(files)-1)/1000+1)]

for i, x in enumerate(bunches):
    r = os.fork()
    if r == 0:
        files = [open("dit/"+f) for f in x]
        time.sleep(0.1*i)
        print "Opened bundle ", i
        time.sleep(4)
        break

time.sleep(5)



