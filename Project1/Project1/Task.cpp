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

std::string getTaskName() {
	return(m_taskName);
}

std::string getMaster() {
	return(m_taskMaster);
}

void setMaster(std::string masterName) {
	m_taskMaster = masterName;
}

bool hasMaster() {
	if (m_taskMaster != "") {
		return(true);
	}
	else {
		return(false);
	}

}