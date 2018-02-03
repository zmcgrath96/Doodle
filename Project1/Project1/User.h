#pragma once
#include <string>
#include <list>
#ifndef USER_H
#define USER_H

public class User {
public:
	User(std::string name, bool isAdmin);
	void getName();
	bool isAdmin();
	void addAvailabilities();
	bool operator==(User &other);
	
	std::list<System::DateTime> availabilities;

private:
	bool admin;
	char* name;
};
#endif // !EXECUTIVE_H

