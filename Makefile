all:
	g++ src/*.cc *.cc -std=c++11 -Wall -g -o pricelabel -I.

clean:
	rm pricelabel -f
	rm *.o -f
