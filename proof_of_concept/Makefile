

all: to_columns

to_columns: to_columns.cpp
	g++ -g -O3 $(shell root-config --cflags) $(shell root-config --libs) -lprotobuf -std=c++11 -o $@ $@.cpp

from_columns: from_columns.cpp
	g++ -g -O3 -lprotobuf -std=c++11 -o $@ $@.cpp
