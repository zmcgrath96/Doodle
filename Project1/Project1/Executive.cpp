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
				//std::list<Event> eventUsers;
				/*for (User u : e.getUsers()) {
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
				}*/
			}
			writeStream << "\n";
			writeStream.close();
		}
	}
}
