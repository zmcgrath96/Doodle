#ifndef TASK_H
#define TASK_H

#include <string>
#include <vector>

class Task
{
public:
	/**
	*	Creates the object
	*	@param
	*	@return
	*/

	Task(std::string taskName);

	/**
	*	Does nothing
	*	@param None
	*	@return None
	*/
	~Task();

	std::string getTaskName();

	void setTaskName(std::string taskName);

	std::string getMaster();

	void setMaster(std::string masterName);

	bool checkMaster();


private:
	std::string taskName;
	std::string taskMaster;

};
#endif
