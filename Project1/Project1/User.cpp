#include "User.h"
#include <iostream>
#include <vector>
using namespace std;
User::User()
{
	m_Times = new bool[54]; //creates boolean array
	for (int i = 0; i<54; i++) //goes through the boolean array
	{
		m_Times[i] = false; //sets every element in the array to false
	}
	m_Strings = new string[54]{ "5:00","5:20","5:40","6:00","6:20","6:40","7:00","7:20","7:40","8:00","8:20","8:40","9:00","9:20","9:40","10:00","10:20","10:40","11:00","11:20","11:40","1:00","1:20","1:40","2:00","2:20","2:40","3:00","3:20","3:40","4:00","4:20","4:40","5:00","5:20","5:40","6:00","6:20","6:40","7:00","7:20","7:40","8:00","8:20","8:40","9:00","9:20","9:40","10:00","10:20","10:40","11:00","11:20","11:40" }; //creates array of strings representing possible time slots
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
bool User::getTime(int i)
{
	return(m_Times[i]); //returns the bool located at the index given
}
string User::getStrings(int j)
{
	return(m_Strings[j]); //returns the time at the given index
}
void User::AddTime(int T)
{
	if ((T >= 0) && (T<54)) //if the index passed in is within the bounds of the array
	{
		if (m_Times[T]) //if the bool at the given index is true
		{
			m_Times[T] = false; //make it false
		}
		else //if the bool is false
		{
			m_Times[T] = true; //make it true
		}
	}
}
void User::getTimes()
{
	cout << getUserName() << " is avalaible at the times: " << endl;
	for (int j = 0; j<54; j++) //runs through the arrays
	{
		if (m_Times[j] == true) //if the bool is true at the index
		{
			cout << m_Strings[j] << endl; //print the time at the index
		}
	}
}
