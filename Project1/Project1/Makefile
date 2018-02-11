Brockman: main.o Executive.o Event.o User.o
	g++ -std=c++11 -g -Wall main.o Executive.o Event.o User.o -o Brockman

main.o: main.cpp
	g++ -std=c++11 -g -Wall -c main.cpp

Executive.o: Executive.cpp Executive.h
	g++ -std=c++11 -g -Wall -c Executive.cpp

Event.o: Event.cpp Event.h
	g++ -std=c++11 -g -Wall -c Event.cpp

User.o: User.cpp User.h
	g++ -std=c++11 -g -Wall -c User.cpp

clean:
	rm *.o Brockman
