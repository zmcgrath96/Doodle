#include "User.h"
#include <iostream>
#include <string>
using namespace std;
User::User(string name, isAdmin)
{
	m_isAdmin = isAdmin;
	m_name = name;
	m_Times = new bool[64];
	for(int i = 0; i<64;i++)
	{
		m_Times[i]=false;
	}
}
User::~User()
{
}
string User getName()
{
	return(m_name);
}
bool isAdmin()
{
	return(m_isAdmin);
}
void addAvailabilities(int time)
{

}
