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
		void getAvailableTimes();
		void addUser(User u);
		std::vector<User> users;
		void setAdmin(std::string Name);
		void setNumOfUs(int index, int num);
		std::string getAdmin();
		int getNumOfUs(int index);
		void Print();
	private:
		std::string name;
		std::string date;
		std::string admin;
		int * NumOfUs;
};
#endif 
