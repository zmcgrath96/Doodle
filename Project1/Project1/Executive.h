#ifndef EXECUTIVE_H
#define EXECUTIVE_H

#include <string>
#include <vector>
#include "Event.h"
#include "User.h"

class Executive
{
	public:
		/**
		*	Creates the object
		*	@param None
		*	@return None
		*/
		Executive();

		/**
		*	Does nothing
		*	@param None
		*	@return None
		*/
		~Executive();

		/**
		*	Adds a given event to the vector that stores all the events
		*	@param An event to be added to the vector
		*	@return None
		*/
		void AddEvent(Event E);

		/**
		*	Returns the name of the events that the given user is admin of
		*	@param A string representing the name of a user
		*	@return A vector containing the names of the events that the given user is admin of
		*/
		std::vector<std::string> checkAval(std::string Name);

		/**
		*	Creates a string array and stores the names of all the events currently stored in the vector
		*	@param None
		*	@return An array of all the names of the events currently stored in the vector
		*/
		std::string* getAllEvents();

		/**
		*	Checks the current size of the event vector and returns it
		*	@param None
		*	@return The size of the event vector
		*/
		int getEventSize();

		/**
		*	Stores the events list, the users, and their avaliabilities in a file so that the information is saved between program executions
		*	Called on save/exit
		*	@param None
		*	@return None
		*/
		void write();

		/**
		*	Reads the information stored in the save file and populates the events list, the users within each event, and the avaliabilites of each user
		*	Called on startup
		*	@param None
		*	@return None
		*/
		void read();

		std::vector<Event> events; //a vector storing all the current events
		Event currentEvent; //the event currently being accessed
		User currentUser; //the user currently using the program
	private:
		std::vector<std::string> EventAdmin; //a vector containing the names of events the current user is the admin of
};
#endif

