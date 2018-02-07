#pragma once
#include <string>
#include <vector>
#include <ctime>
#ifndef USER_H
#define USER_H

public class User {
public:
	User(std::string name, bool isAdmin);
	std::string getName();
	bool isAdmin();
	void addAvailabilities();
	bool operator==(User &other);
	
	std::vector<std::time_t> availabilities;

private:
	bool admin;
	std::string name;
};
#endif // !EXECUTIVE_H

