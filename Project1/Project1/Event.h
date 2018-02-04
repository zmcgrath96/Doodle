#pragma once

#ifndef EVENT_H
#define EVENT_H

#include <string>
#include <list>
#include <ctime>
#include "User.h"

class Event {
public:
	Event(std::string eventName, std::time_t eventDate, std::string admin);
	std::string getName();
	std::string getAdmin();
	std::time_t getDate();
	std::string getAvailableTimes();
	void addUser(User& u);
private:
	std::string name;
	std::string admin;
	std::time_t date;
	std::list<User> users;
};
#endif // !EXECUTIVE_H

