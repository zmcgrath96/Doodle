#ifndef EVENT_H
#define EVENT_H

#include <string>
#include <vector>
#include "User.h"
#include "Day.h"
#include "Task.h"

using namespace std;

class Event
{
	public:
	/**
		*	Constructor
		*	@param None
		*	@return None
		*/
	Event();

	/**
		*	Constructor
		*	@param Day object, Day object, string, User object
		*	@return None
		*/
	Event(Day startDay, Day endDay, string name, User admin);


	private:
		Day m_startDay;
		Day m_endDay;
		string m_name;
		User m_admin;


};
#endif 
