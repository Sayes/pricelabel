all:
	g++ *.cc -std=c++11 -Wall -g -o pricelabel

clean:
	rm pricelabel -f
	rm *.o -f
