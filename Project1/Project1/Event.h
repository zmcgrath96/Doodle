#pragma once
#include <string>
#include <list>
#include "User.h"
#ifndef EVENT_H
#define EVENT_H

public class Event {
public:
	Event(std::string eventName, System::DateTime eventDate);
	std::string getName();
	System::DateTime getDate();
	std::string getAvailableTimes();
	void addUser(User u);
private:
	std::string name;
	System::DateTime date;
	std::list<User> users;
};
#endif // !EXECUTIVE_H

