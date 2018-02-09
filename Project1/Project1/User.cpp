#include "User.h"
#include <iostream>
#include <vector>
using namespace std;

User::User(string name, bool isAdmin)
{
	m_Times = new bool[54];
	for(int i = 0; i<54; i++)
	{
		m_Times[i] = false;
	}
	m_Name = name;
	m_isAdmin = isAdmin;
}
User::~User()
{
	delete [] m_Times;
}
string User::getName()
{
	return(m_Name);
}
void User::Run()
{
	AddTime(0);
	AddTime(5);
	AddTime(46);
	for(int i = 0; i<54; i++)
	{
		if(m_Times[i])
		{
			cout<<"Available at: "<<i<<endl;
		}
	}
	if(isAdmin())
	{
		cout<<getName()<<" is an admin";
	}
	else
	{
		cout<<getName()<<" is not an admin";
	}
}
void User::AddTime(int T)
{
	if(m_Times[T])
	{
		m_Times[T] = false;
	}
	else
	{
		m_Times[T] = true;
	}
}
bool User::isAdmin()
{
	return(m_isAdmin);
}
