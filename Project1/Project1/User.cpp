#include "User.h"
#include <iostream>
#include <vector>
using namespace std;
User::User()
{

	m_Times = new bool[54];
	for(int i = 0; i<54; i++)
	{
		m_Times[i] = false;
	}
	m_Strings = new string[54]{"5:00","5:20","5:40","6:00","6:20","6:40","7:00","7:20","7:40","8:00","8:20","8:40","9:00","9:20","9:40","10:00","10:20","10:40","11:00","11:20","11:40","1:00","1:20","1:40","2:00","2:20","2:40","3:00","3:20","3:40","4:00","4:20","4:40","5:00","5:20","5:40","6:00","6:20","6:40","7:00","7:20","7:40","8:00","8:20","8:40","9:00","9:20","9:40","10:00","10:20","10:40","11:00","11:20","11:40"};
}
User::~User()
{
}
void User::setName(string name)
{
	m_Name = name;
}
string User::getUserName()
{
	return(m_Name);
}
bool User::getTime(int i)
{
	return(m_Times[i]);
}
string User::getStrings(int j)
{
	return(m_Strings[j]);
}
void User::AddTime(int T)
{
	if((T>=0)&&(T<54))
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
}
void User::getTimes()
{
	cout<<getUserName()<<" is avalaible at the times: "<<endl;
	for(int j = 0; j<54; j++)
	{
		if(m_Times[j]==true)
		{
			cout<<m_Strings[j]<<endl;
		}
	}
}
