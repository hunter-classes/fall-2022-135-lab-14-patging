#Patrick Ging Makefile


main: main.o myvector.o
	g++ -o main -std=c++11 main.o myvector.o

tests: tests.o myvector.o
	g++ -o tests -std=c++11 tests.o myvector.o

clean:
	rm tests main a.out *.o

#.o files

main.o: main.cpp myvector.cpp myvector.h
	g++ -c -std=c++11 main.cpp myvector.cpp

tests.o: tests.cpp myvector.cpp doctest.h myvector.h
	g++ -c -std=c++11 tests.cpp myvector.cpp

myvector.o: myvector.cpp myvector.h
	g++ -c -std=c++11 myvector.cpp