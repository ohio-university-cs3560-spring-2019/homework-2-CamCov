CXX =  g++
CXXFLAGS = -g -I"../include/"

#LDFLAGS = -L"lib"
#LDLIBS = -l"change"


prog1: ./bin/main.o ./bin/change.o
	$(CXX) ./bin/change.o ./bin/main.o -o prog1

./bin/main.o: ./src/main.cc ./include/change.h
	$(CXX) $(CXXFLAGS) ./src/main.cc -c

./bin/change.o: ./include/change.h ./src/change.cc
	$(CXX) $(CXXFLAGS) ./src/change.cc -c

clean:
	cd ./bin; \
	rm -f *.o
