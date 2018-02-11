#ifndef EVENT_H
#define EVENT_H

#include <string>
#include <vector>
#include "User.h"

class Event
{
	public:
		Event(std::string eventName, std::string eventDate);
		void Clean();
		std::string getName();
		std::string getDate();
		std::string getAvailableTimes();
		void addUser(User &u);
		void getUsers();
	private:
		std::string name;
		std::string date;
		std::vector<User> users;
};
#endif 

