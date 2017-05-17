all:
	g++ *.cc -std=c++11 -Wall -g -o market

clean:
	rm market
