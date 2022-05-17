all: MilitaryTime

MilitaryTime: main.o MilitaryTime.o
	g++ -o MilitaryTime main.o MilitaryTime.o

main.o: main.cpp
	g++ -c main.cpp

MilitaryTime.o: MilitaryTime.cpp MilitaryTime.h Strings.h
	g++ -c MilitaryTime.cpp