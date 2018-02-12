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
		std::vector<std::string> checkAval(std::string Name);
		std::string* getAllEvents();
		int getEventSize();
		std::vector<Event> events;
		Event currentEvent;
		User currentUser;
	private:
		std::vector<std::string> EventAdmin;
};
#endif

