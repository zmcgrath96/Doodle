#ifndef USER_H
#define USER_H
#include <iostream>
#include <string>
#include <list>
public class User
{
	public:
		User(std::string name, bool isAdmin);
		User::~User();
		std::string getName();
		bool isAdmin();
		void addAvailabilities();
		//bool operator==(User &other);
		//std::list<System::DateTime> availabilities;
	
	private:
		bool m_isAdmin;
		std::string m_name;
		bool * m_Times;
};
#endif 

