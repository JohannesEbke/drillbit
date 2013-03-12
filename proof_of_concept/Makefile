

all: to_columns from_columns

from_columns: from_columns.cpp
	g++ -g -O3 $< -lprotobuf -std=c++11 -o $@

%: %.cpp
	g++ -g -O3 $< $(shell root-config --cflags) $(shell root-config --libs) -lprotobuf -std=c++11 -o $@
