#ifndef TASK_H
#define TASK_H

#include <string>
#include <vector>

class Task
{
public:


	/**
	*	Creates the object
	*	@param none
	*	@return none
	*/
	Task();


	/**
	*	Creates the object
	*	@param string name
	*	@return none
	*/

	Task(std::string taskName);

	/**
	*	Does nothing
	*	@param None
	*	@return None
	*/
	~Task();

	/**
	* getTaskName
	* @param None
	* @return string
	*/
	std::string getTaskName();

	/**
	* getMaster
	* @param None
	* @return string
	*/
	std::string getMaster();

	/**
	* setMaster
	* @param string name
	* @return None
	*/
	void setMaster(std::string masterName);

	/**
	* hasMaster
	* @param None
	* @return bool
	*/
	bool hasMaster();


private:
	std::string m_taskName;
	std::string m_taskMaster;

};
#endif
