#ifndef EVENT_H
#define EVENT_H

#include <string>
#include <vector>
#include <array>
#include "User.h"
#include "Day.h"
#include "Task.h"


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
	Event(Day eventDay, std::string name, User admin);

	/**
		*	addTask
		*	@param Task object
		*	@return bool
		*/
	bool addTask(Task task);

	/**
	*	addUser
	*	@param string name
	*	@return bool
	*/
	bool addUser(std::string uName);

	Day getEventDay();


	/**
		*	getName
		*	@param none
		*	@return String
		*/
	std::string getName();

	/**
		*	getAdmin
		*	@param none
		*	@return User object
		*/
	User getAdmin();

	/**
		*	getTasks
		*	@param none
		*	@return Task vector
		*/
	std::vector<Task>& getTasks();

	/**
		*	getNumTaks
		*	@param none
		*	@return Integer
		*/
	int getNumTasks();

	/**
	*	getUsers
	*	@param none
	*	@return User vector
	*/
	std::vector<User>& getUsers();

	/**
	*	getNumUsers
	*	@param none
	*	@return Integer
	*/
	int getNumUsers();

	void setEventDay(Day eventDay);

	/**
	 * setAdmin
	 * @param User admin
	 * @return none
	 */
	void setAdmin(User admin);

	/**
	 * setName
	 * @param String name
	 * @return none
	 */
	void setName(std::string name);

	int getStartTime();

	int getEndTime();

	void setStartTime(int T);

	void setEndTime(int T);





	private:
		Day m_eventDay;
		std::string m_name;
		User m_admin;
		std::vector<Task> m_task;
		int m_numTasks;
		std::vector<User> m_user;
		int m_numUsers;
		int m_startTime;
		int m_endTime;


};
#endif 
