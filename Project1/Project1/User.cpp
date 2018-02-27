#include "User.h"
#include <iostream>
#include <vector>
using namespace std;
User::User() {}
User::User(std::string name)
{
	m_Name = name;
}
User::~User()
{
}
string User::getUserName()
{
	return(m_Name); //returns the name of the user
}
