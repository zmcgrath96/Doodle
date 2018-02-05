#include <algorithm>
#include "Event.h"
Event::Event(std::string eventName, std::time_t eventDate) {
	name = eventName;
	date = eventDate;
}

std::string Event::getName() {
	return name;
}

std::time_t Event::getDate() {
	return date;
}

std::string Event::getAvailableTimes() {

}

void Event::addUser(User u) {
	bool exists = false;
	for (int i = 0; i < users.size; i++) {
		if (users[i] == u)
		{
			exists = true;
			break;
		}
	}
	if (!exists)
		users.push_back(u);
}