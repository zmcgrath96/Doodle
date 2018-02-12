#include <algorithm>
#include "Event.h"
Event::Event() 
{
	NumOfUs = new int[54];
	for(int i = 0; i<54;i++)
	{
		NumOfUs[i] = 0;
	}
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
void Event::setAdmin(std::string Name)
{
	admin = Name;
}
void Event::setNumOfUs(int index, int num)
{
	NumOfUs[index] = num;
}
int Event::getNumOfUs(int index)
{
	return(NumOfUs[index]);
}
std::string Event::getAdmin()
{
	return admin;
}

/// <summary>
/// Returns available times
/// </summary>
void Event::getAvailableTimes()
{
	int C = 0;
	for(int i = 0; i<54; i++)
	{
		std::cout<<"Users available at "<<users[0].getStrings(i)<<":"<<std::endl;
		for(int j = 0; j<users.size();j++)
		{
			if(users[j].getTime(i))
			{
				C++;
				std::cout<<users[j].getUserName()<<std::endl;
			}
		}
		//std::cout<<C<<std::endl;
		setNumOfUs(i,C);
		std::cout<<getNumOfUs(i)<<std::endl;
		C=0;
	}
}
void Event::Print()
{
	for(int i = 0; i<54;i++)
	{
		std::cout<<"Users available at "<<users[0].getStrings(i)<<":"<<std::endl;
		std::cout<<getNumOfUs(i)<<std::endl;
	}
}
/// <summary>
/// adds user
/// </summary>
void Event::addUser(User u)
{
	users.push_back(u);
}

