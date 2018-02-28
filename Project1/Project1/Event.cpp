#include <algorithm>
#include "Event.h"

using namespace std;

Event::Event(){}

Event::~Event(){
	
}


Event::Event(Day startDay, Day endDay, string name, User admin)
	
{
	m_startDay = startDay;
	m_endDay = endDay;
	m_name = name;
	m_admin = admin;
	m_numTasks = 0;
	m_numUsers = 0;
	std::vector<Task> m_task(1, Task());
	std::vector<User> m_user(1, User());
}



bool Event::addTask(string tName){
	Task temp = Task(tName);
	m_task.push_back(temp);
	// If we have hit size of array, double it
	m_numTasks++;
	return true;
}

bool Event::addUser(string uName) {
	User temp = User(uName);
	m_user.push_back(temp);
	// If we have hit size of array, double it
	m_numUsers++;
	return true;
}



//---------------------------------------------------
//
//				GETS
//
//---------------------------------------------------


Day Event::getStartDay(){
	return m_startDay;
}

Day Event::getEndDay(){
	return m_endDay;
}

string Event::getName(){
	return m_name;
}

User Event::getAdmin(){
	return m_admin;
}

std::vector<Task>& Event::getTasks(){
	return m_task;
}

int Event::getNumTasks(){
	return m_numTasks;
}

std::vector<User>& Event::getUsers() {
	return m_user;
}

int Event::getNumUsers() {
	return m_numUsers;
}


void Event::setAdmin(User admin) {
	m_admin = admin;
}


void Event::setEndDay(Day end) {
	m_endDay = end;
}

void Event::setName(string name) {
	m_name = name;
}

void Event::setStartDay(Day start) {
	m_startDay = start;
}
