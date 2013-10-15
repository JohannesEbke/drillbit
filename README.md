Drillbit
--------

Poster
------

<http://www.ebke.org/drillbit_poster_chep2013.pdf>

Abstract
--------

Drillbit is an experimental new data storage format, which already shows great promise.
Feel free to play around, however keep in mind that drillbit is currently in the prototyping stage.

Drillbit is licensed under the AGPL v3 as specified in the LICENSE file. This means that you can use drillbit only in open source code. Please contact us if you wish to discuss alternative licensing.

Getting started
---------------

You will need to install libprotobuf-dev libraries through your favourite package manager.

Then (as a normal user) at the console run:

```bash
./waf configure --prefix=install
./waf install
```

This will install the binaries to `${PWD}/install/bin`.

Commands
--------

* `speedtests <mode> <dit files>...`: Speed test reading dit files
* `root2stripes [-h|--help] [-t treename] [-m pattern] [file]...`: Explode a root file
* `stripes2root [dit files]...`: inverse of root2stripes 
* `make_test_dit`: Requires `${PWD}/dit_test` directory to exist, builds some test columns

