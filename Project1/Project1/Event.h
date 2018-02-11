#ifndef EVENT_H
#define EVENT_H

#include <string>
#include <vector>
#include "User.h"

class Event
{
	public:
		Event();
		void setEventName(std::string eventName);
		void setEventDate(std::string eventDate);
		std::string getName();
		std::string getDate();
		std::string getAvailableTimes();
		void addUser(User &u);
		void getUsers();
		std::vector<User> users;
	private:
		std::string name;
		std::string date;
};
#endif 

