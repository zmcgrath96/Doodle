#pragma once

#ifndef USER_H
#define USER_H

#include <string>
#include <list>

class User {
public:
	User(std::string name);
	std::string getName();
	void addAvailabilities();
	bool operator==(User &other);
	
	std::list<std::time_t> availabilities;

private:
	bool admin;
	char* name;
};
#endif // !EXECUTIVE_H

