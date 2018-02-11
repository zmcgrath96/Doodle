#ifndef EXECUTIVE_H
#define EXECUTIVE_H

#include <string>
#include <vector>
#include <ctime>
#include "Event.h"
#include "User.h"

class Executive
{
	public:
		Executive();
		~Executive();
		void AddEvent(Event E);
		//void AddUser();
		//void AddAvailabilities(bool availabilities[]);
		void checkAval();
		void makeCurrentUser(std::string name);
		void getAllEvents();
		void getUserEvents();
	
	private:
		//User currentUser;
		int currentEventIndex;
		std::vector<Event> events;
		//Event getCurrentEvent();
};
#endif

