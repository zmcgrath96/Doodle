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

string* Executive::getAllEvents()
{
	cout<<"All events"<<endl;
	const int eventSize = events.size();
	string* allEvents = new string[eventSize];
	for(int i = 0; i<events.size();i++)
	{
		allEvents[i] = events[i].getName();
		//cout<<events[i].getName()<<endl;
	}
	return allEvents;
}

int Executive::getEventSize() {
	return events.size();
}
