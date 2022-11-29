#Patrick Ging Makefile


main: main.o recursion.o
	g++ -o main -std=c++11 main.o recursion.o

tests: tests.o recursion.o
	g++ -o tests -std=c++11 tests.o recursion.o

clean:
	rm tests main a.out *.o

#.o files

main.o: main.cpp recursion.cpp recursion.h
	g++ -c -std=c++11 main.cpp recursion.cpp

tests.o: tests.cpp recursion.cpp doctest.h recursion.h
	g++ -c -std=c++11 tests.cpp recursion.cpp

recursion.o: recursion.cpp recursion.h
	g++ -c -std=c++11 recursion.cpp