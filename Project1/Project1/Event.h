#pragma once

#ifndef EVENT_H
#define EVENT_H

#include <string>
#include <vector>
#include "User.h"
#include <ctime>

class Event {
public:
	Event(std::string eventName, std::time_t eventDate);
	std::string getName();
	User getAdmin();
	std::time_t getDate();
	std::string getAvailableTimes();
	std::vector<User> users;
	void addUser(User u);
	std::vector<User> users;
private:
	std::string name;
	std::time_t date;
	User admin;
	std::vector<User> users;
};
#endif // !EXECUTIVE_H

