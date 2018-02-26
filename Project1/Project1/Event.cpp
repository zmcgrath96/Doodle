#include <algorithm>
#include "Event.h"

using namespace std;

Event::Event(){}

Event::~Event(){
	delete m_task;
}


Event::Event(Day startDay, Day endDay, string name, User admin){
	m_startDay = startDay;
	m_endDay = endDay;
	m_name = name;
	m_admin = admin;
	m_task = new Task[5];
	numTasks = 0;
}

bool Event::addTask(string tName){
	Task temp = Task(tName);

	// If we have hit size of array, double it
	if (numTasks == m_task.size()){
		Task* temp2 = new Task[m_task.size()*2];
		for (int i = 0; i < m_task.size(); i++){
			temp2[i] = m_task[i];
		}
		delete m_task;
		m_task = temp2;
	}
	
	m_task[numTasks] = temp;
	numTasks++;
}

