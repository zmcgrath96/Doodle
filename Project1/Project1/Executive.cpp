#include "Executive.h"

Executive::Executive()
{
}

Executive::~Executive()
{
}

void Executive::AddEvent(std::string eventName, std::time_t eventDate)
{
	currentEvent = Event(eventName, eventDate, currentUser.getName()); //makes the current event based on the values passed in and the current user
	events.push_front(currentEvent); //adds the current event to the front of the list
}

void Executive::AddUser()
{
	currentEvent.addUser(currentUser) //adds the current user to the current event
}

void Executive::AddAvailabilities(std::list<std::string> availabilities)
{
	currentUser.addAvailabilities(availabilities); //passes the avaliabilities on to the user class for handling
}

void Executive::makeCurrentUser(std::string name)
{
}

void Executive::makeCurrentEvent(Event newEvent)
{
}

std::list<Event> Executive::getAllEvents()
{
	return(events); //returns the list of events
}

std::list<Event> Executive::getUserEvents()
{
	for(std::list<Event>::iterator i = events.begin(); i != events.end(); i++) //runs through the list of events
	{
		if (currentUser.getName() == i->getAdmin()) //checks if the current user is the admin of the event
		{

		}
	}
}