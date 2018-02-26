#include "Task.h"
#include <vector>
using namespace std;
Task::Task(string taskName)
{
	m_taskName = taskName;
	m_taskMaster = "";
}

Task::~Task()
{
}

std::string Task::getTaskName() {
	return(m_taskName);
}

std::string Task::getMaster() {
	return(m_taskMaster);
}

void Task::setMaster(std::string masterName) {
	m_taskMaster = masterName;
}

bool Task::hasMaster() {
	if (m_taskMaster != "") {
		return(true);
	}
	else {
		return(false);
	}

}