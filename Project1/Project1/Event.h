#ifndef EVENT_H
#define EVENT_H

#include <string>
#include <vector>
#include "User.h"

class Event
{
	public:
		Event();
		Event(std::string eventName, std::string eventDate);
		void setEventName(std::string eventName);
		void setEventDate(std::string eventDate);
		std::string getName();
		std::string getDate();
		std::string getAvailableTimes();
		void addUser(User u);
		std::vector<User> users;
		User getAdmin();
	private:
		std::string name;
		std::string date;
		User admin;
};
#endif 

