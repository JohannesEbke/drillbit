export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:$PWD/../install/lib

set -e
set -u

DBBASE=/home/sirius/Projekte/drillbit/install

CXXFLAGS="$(root-config --cflags) -I$DBBASE/include"
LINKFLAGS="$(root-config --libs) -L$DBBASE/lib -ldrillbit -ldrillbit_root"
CXX=g++-4.7

CXXLINE="$CXX -Wl,--no-as-needed -std=c++0x -O3"
CMD="$CXXLINE $CXXFLAGS $LINKFLAGS PhotonTree.C -o PhotonTree"

echo "Compiling: "
echo $CMD
time $CMD

echo
echo "Timing ROOT..."
time ./PhotonTree ../data/NTUP_PHOTON.693445._000001.root.1 > /dev/shm/test_root

echo
echo "Timing DIT..."
time ./PhotonTree ../dit/*.dit > /dev/shm/test_dit

echo
echo "Output Diff:"
diff /dev/shm/test_root /dev/shm/test_dit
echo "-- end --"
