#ifndef EVENT_H
#define EVENT_H

#include <string>
#include <vector>
#include "User.h"

class Event
{
	public:
		/*
		*	Creates an int array to store the number of users avaliable at the cooresponding time slot
		*	@param None
		*	@return None
		*/
		Event();

		/*
		*	Stores the name and date of the event
		*	@param Two strings that represent the name and date of the event
		*	@return None
		*/
		Event(std::string eventName, std::string eventDate);

		/*
		*	Takes in a string representing the name of the event and saves it
		*	@param A string representing the name of the event
		*	@return None
		*/
		void setEventName(std::string eventName);

		/*
		*	Takes in a string representing the date of the event and saves it
		*	@param A string representing the date of the event
		*	@return None
		*/
		void setEventDate(std::string eventDate);

		/*
		*	Returns the name of the event
		*	@param None
		*	@return A string representing the name of the event
		*/
		std::string getName();

		/*
		*	Returns the date of the event
		*	@param None
		*	@return A string representing the date of the event
		*/
		std::string getDate();

		/*
		*	Prints the number of users avaliable at each time slot while also saving the numbers to NumOfUs
		*	@param None
		*	@return None
		*/
		void getAvailableTimes();

		/*
		*	Adds a given user to the event
		*	@param A user to be added to the event
		*	@return None
		*/
		void addUser(User u);

		/*
		*	Takes in the name of the admin for the event and stores it
		*	@param A string representing the name of the admin for the event
		*	@return None
		*/
		void setAdmin(std::string Name);

		/*
		*	Stores the number of users avaliable at a specified time slot
		*	@param Two ints representing the index of the time slot and the number of users avaliable for that time
		*	@return None
		*/
		void setNumOfUs(int index, int num);

		/*
		*	Returns the name of the admin for the event
		*	@param None
		*	@return A string representing the name of the admin for the event
		*/
		std::string getAdmin();

		/*
		*	Takes in an index cooresponding to a time slot and returns the number of users avaliable for that time slot
		*	@param An int representing the index of the time slot desired
		*	@return An int representing the number of users avaliable at the time slot
		*/
		int getNumOfUs(int index);

		/*
		*	Prints the number of users avaliable at each time slot
		*	@param None
		*	@return None
		*/
		void Print();

		std::vector<User> users; //a vector containing all the users for the event
	private:
		std::string name; //the name of the event
		std::string date; //the date of the event
		std::string admin; //the name of the admin for the event
		int * NumOfUs; //an int array that stores the number of users avaliable at each time slot
};
#endif 
