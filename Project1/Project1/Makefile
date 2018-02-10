Brockman: main.o Event.o User.o
	g++ -std=c++11 -g -Wall main.o Event.o User.o -o Brockman

main.o: main.cpp
	g++ -std=c++11 -g -Wall -c main.cpp

User.o: User.cpp User.h
	g++ -std=c++11 -g -Wall -c User.cpp

Event.o: Event.cpp Event.h
	g++ -std=c++11 -g -Wall -c Event.cpp

clean:
	rm *.o Brockman
