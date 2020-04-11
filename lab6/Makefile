DVD.o:  DVD.cpp DVD.h
	g++ -g -Wall -std=c++11 -c DVD.cpp

DVDDriver:  DVD.o DVDDriver.o
	g++ -g -Wall -std=c++11 -o DVDDriver DVD.o DVDDriver.o

DVDDriver.o: DVD.o DVDDriver
	g++ -g -Wall -std=c++11 -c DVDDriver.cpp
