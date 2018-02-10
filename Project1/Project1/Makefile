Brockman: main.o User.o
	g++ -std=c++11 -g -Wall main.o User.o -o Brockman

main.o: main.cpp
	g++ -std=c++11 -g -Wall -c main.cpp

User.o: User.cpp User.h
	g++ -std=c++11 -g -Wall -c User.cpp	

clean:
	rm *.o Brockman
