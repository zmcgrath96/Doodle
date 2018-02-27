#include "User.h"
#include <iostream>
#include <vector>
using namespace std;
User::User()
{
}
User::~User()
{
}
void User::setName(string name)
{
	m_Name = name; //sets the user's name to the name passed in
}
string User::getUserName()
{
	return(m_Name); //returns the name of the user
}
