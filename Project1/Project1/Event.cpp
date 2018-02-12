#include <algorithm>
#include "Event.h"
Event::Event() 
{
}

Event::Event(std::string eventName, std::string eventDate)
{
	name = eventName;
	date = eventDate;
}

/// <summary>
/// Returns event name
/// </summary>
void Event::setEventName(std::string eventName)
{
	name = eventName;
}

/// <summary>
/// sets date
/// <parameter>
/// </summary>
void Event::setEventDate(std::string eventDate)
{
	date = eventDate;
}

/// <summary>
/// Returns name
/// </summary>
std::string Event::getName()
{
	return name;
}

/// <summary>
/// Returns date
/// </summary>
std::string Event::getDate() 
{
	return date;
}

User Event::getAdmin() {
	return admin;
}

/// <summary>
/// Returns available times
/// </summary>
std::string Event::getAvailableTimes()
{
	std::cout<<"---------------------------------------"<<std::endl;
	for(int i = 0; i<users.size();i++)
	{
		users[i].getName();
		users[i].getTimes();
	}
	return "";
}

/// <summary>
/// adds user
/// </summary>
void Event::addUser(User u)
{
	users.push_back(u);
	if (u.getisAdmin())
		admin = u;
}
