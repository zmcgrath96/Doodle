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

void Executive::checkAval()
{
	for(int i = 0; i<events.size();i++)
	{
		cout<<"Availabilities for "<<events[i].getName()<<endl;
		events[i].getAvailableTimes();
	}
}

void Executive::makeCurrentUser(string name)
{
//	currentUser = User(name);
}

void Executive::getAllEvents()
{
	cout<<"All events"<<endl;
	for(int i = 0; i<events.size();i++)
	{
		cout<<events[i].getName()<<endl;
	}
}
void Executive::getUserEvents()
{
	vector<Event> userEvents;
	for(vector<Event>::iterator i = events.begin(); i != events.end(); ++i)
	{
//		if (currentUser.getName() == i->getAdmin())
//		{
//			userEvents.push_front(*i);
//		}
	}
//	userEvents.sort();
}
