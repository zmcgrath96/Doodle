#include "Executive.h"
#include <iostream>
#include <fstream>
#include <ctime>
#include <string>
#include <vector>
#include <list>

void Executive::write() {
	using namespace std;
	if (events.empty()) {
		return;
	}
	else
	{
		ofstream writeStream("events.txt");
		if (writeStream.is_open()) {
			for (Event e : events) {
				writeStream << "Event: " << e.getName();
				writeStream << "Date: " << e.getDate();
				for (User u : e.users) {
					if (u.isAdmin()) {
						writeStream << "Admin: " << u.getName();
					}
					else {
						writeStream << "User: " << u.getName();
					}
					//times
					for (std::time_t t : u.availabilities) {
						writeStream << "Times: " << t;
					}
				}
			}
			writeStream << "\n";
			writeStream.close();
		}
	}
}
void Executive::read() {
	using namespace std;
	ifstream readStream("events.txt", ifstream::in);
	if (!readStream.is_open()) {
		//for()
		//search events list for events
		//search users vector for users
		//search times will be stored in users as a boolean array

	}
	else
	{
		cout << "failed opening file" << endl;
		return;
	}
}