#include <algorithm>
#include "Event.h"
Event::Event() 
{
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

/// <summary>
/// Returns users
/// </summary>
void Event::getUsers()
{
	std::cout<<"---------------------------------------"<<std::endl;
	if(users.size()!=0)
	{
		for(int i = 0; i<users.size();i++)
		{
			std::cout<<"Name: "<<users[i].getName()<<std::endl<<"Admin: "<<users[i].getisAdmin()<<std::endl;
		}
		std::cout<<std::endl;
	}
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
void Event::addUser(User &u)
{
	users.push_back(u);
	/*
	bool exists = false;
	for (int i = 0; i < users.size(); i++)
       	{
		if (users[i].getName() == u.getName())
	       	{
			exists = true;
			break;
		}
	}
	std::string size;
	if (!exists)
       	{
		users.push_back(u);
		size = std::to_string(users.size());
		std::cout<<"Size: "<<size<<std::endl;
	}
	*/
}
