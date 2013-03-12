

all: to_columns

to_columns: to_columns.cpp
	g++ -g -O3 -lprotobuf -lCore -lTree -std=c++11 -I /usr/include/root -o $@ $@.cpp

from_columns: from_columns.cpp
	g++ -g -O3 -lprotobuf -std=c++11 -o $@ $@.cpp
