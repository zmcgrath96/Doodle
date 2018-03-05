#include <algorithm>
#include "Event.h"


Event::Event(){}

Event::~Event(){
	
}


Event::Event(Day eventDay, std::string name, User admin)
	
{
	m_eventDay = eventDay;
	m_name = name;
	m_admin = admin;
	m_numTasks = 0;
	m_numUsers = 0;
	std::vector<Task> m_task(1, Task());
	std::vector<User> m_user(1, User());
}



bool Event::addTask(Task task){
	m_task.push_back(task);
	// If we have hit size of array, double it
	m_numTasks++;
	return true;
}

bool Event::addUser(std::string uName) {
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


Day Event::getEventDay(){
	return m_eventDay;
}



std::string Event::getName(){
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


void Event::setEventDay(Day eventDay) {
	m_eventDay = eventDay;
}

void Event::setName(std::string name) {
	m_name = name;
}

int Event::getStartTime() {
	return m_startTime;
}

int Event::getEndTime() {
	return m_endTime;
}

void Event::setStartTime(int T) {
	m_startTime = T;
}

void Event::setEndTime(int T) {
	m_endTime = T;
}