/*
*	Changes to be made to the program:
*	1. Instead of storing the isAdmin bool in the user class, make an Admin string in the event class that states the name of the admin. This way, we don't have to check the list of users to find out who the admin is
*	2. Need to make addUser() take in a user by reference so that executive can change the avaliabilities of a user after adding them to an event
*	3. Need to make addAvaliabilities() in the user class take a list of strings as a parameter
*	4. Need to make the list of users within the event class accessable for searching
*/

#pragma once
#ifndef EXECUTIVE_H
#define EXECUTIVE_H

#include <string>
#include <list>
#include <ctime>
#include "Event.h"
#include "User.h"

class Executive {
public:
	/*
	*	Reads from file, constructs the list of events, populates each event with the users associated with the event,
	*	and adds the avaliability of each user
	*/
	Executive();

	/*
	*	Takes the events in the list and stores them, the users associated with the events,
	*	and the avaliabilities associated with the users, to a file.
	*/
	~Executive();

	/*
	*	Takes in the name and date associated with a new event, creates the event,
	*	makes it the current event, and adds it to the front of the list
	*/
	void AddEvent(std::string eventName, std::time_t eventDate);

	/*
	*	Checks if the current user is already attending the current event, if so then makes the user in the event the current user,
	*	if not then adds the current user to the event
	*/
	void AddUser();

	/*
	*	Takes in a list of times and adds it to the current user
	*/
	void AddAvailabilities(std::list<std::string> availabilities);

	/*
	*	Takes in the name of a user and makes them the current user
	*/
	void makeCurrentUser(std::string name);

	/*
	*	Takes in an event and makes it the current event
	*/
	void makeCurrentEvent(int index);

	/*
	*	Returns the list of events
	*/
	std::list<Event> getAllEvents();

	/*
	*	Checks the name of the current user against the admin name of each event,
	*	then returns a list of events that the current user is admin of
	*/
	std::list<Event> getUserEvents();

private:
	User currentUser;
	int currentEventIndex;
	std::list<Event> events;

	/*
	*	Goes through the event list and returns the current event
	*/
	Event getCurrentEvent();
};
#endif // !EXECUTIVE_H

