#pragma once
#include <string>
#include <list>
#include "Event.h"
#include "User.h"
#ifndef EXECUTIVE_H
#define EXECUTIVE_H


public class Executive {
public:
	Executive();
	void AddEvent();
	std::string getAllEvents();
	void AddAvailabilities(std::list<std::string> availabilities);

	void read();
	void write();

private:
	User currentUser;
	Event currentEvent;
	std::list<Event> events;
};
#endif // !EXECUTIVE_H

