#include <algorithm>
#include "Event.h"
Event::Event(std::string eventName, std::time_t eventDate) 
{
	name = eventName;
	date = eventDate;
}

std::string Event::getName()
{
	return name;
}

std::time_t Event::getDate() 
{
	return date;
}

std::string Event::getAvailableTimes()
{
	return "";
}

User Event::getAdmin()
{
	return admin;
}

void Event::addUser(User u, std::string UserName, bool isAdmin)
{
	bool exists = false;
	for (int i = 0; i < users.size(); i++)
       	{
		if (users[i].getName() == u.getName())
	       	{
			exists = true;
			break;
		}
	}
	if (!exists)
       	{
		//if (u.isAdmin)
		//	admin = u;
		u.setName(UserName)
		u.setisAdmin(isAdmin);
		users.push_back(u);
	}
}
