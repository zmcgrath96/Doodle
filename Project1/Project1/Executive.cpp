#include "Executive.h"
using namespace std;
Executive::Executive()
{
}

Executive::~Executive()
{
}
void Executive::AddEvent(Event E)
{
	events.push_back(E); 
}
/// <summary>
/// test
/// </summary>

void Executive::checkAval()
{
	for(int i = 0; i<events.size();i++)
	{
		//cout<<"Availabilities for "<<events[i].getName()<<endl;
		events[i].getAvailableTimes();
	}
}

void Executive::getAllEvents()
{
	cout<<"All events"<<endl;
	for(int i = 0; i<events.size();i++)
	{
		//cout<<events[i].getName()<<endl;
	}
}
