#ifndef EVENT_H
#define EVENT_H

#include <string>
#include <vector>
#include <array>
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
	*	Destroys the Event
	*	@param
	*	@return
	*/
	~Event();

	/**
		*	Constructor
		*	@param Day object, Day object, string, User object
		*	@return None
		*/
	Event(Day startDay, Day endDay, string name, User admin);

	/**
		*	addTask
		*	@param string name
		*	@return true
		*/
	bool addTask(string tName);


	/**
		*	getStartDay
		*	@param none
		*	@return Day object
		*/
	Day getStartDay();

	/**
		*	getEndDay
		*	@param none
		*	@return Day object
		*/
	Day getEndDay();


	/**
		*	getName
		*	@param none
		*	@return String
		*/
	string getName();

	/**
		*	getAdmin
		*	@param none
		*	@return User object
		*/
	User getAdmin();

	/**
		*	getTasks
		*	@param none
		*	@return Task pointer to array
		*/
	Task* getTasks();

	/**
		*	getNumTaks
		*	@param none
		*	@return Integer
		*/
	int getNumTasks();


	private:
		Day m_startDay;
		Day m_endDay;
		string m_name;
		User m_admin;
		Task* m_task;
		int m_numTasks;


};
#endif 
