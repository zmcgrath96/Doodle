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

std::vector<std::string> Executive::checkAval(string Name)
{
	for(int i = 0; i<events.size();i++)
	{
		if(events[i].getAdmin()==Name)
		{
			cout<<"Availabilities for "<<events[i].getName()<<endl;
			//std::cout<<Name<<"=="<<events[i].getAdmin()<<std::endl;
			EventAdmin.push_back(events[i].getName());
			cout<<Name<<" is an admin of the event: "<<EventAdmin[i]<<endl;
			events[i].getAvailableTimes();
		}
		else
		{
			std::cout<<Name<<"!="<<events[i].getAdmin()<<std::endl;
		}
	}
	return(EventAdmin);
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
