#include "Executive.h"
#include <iostream>
#include <fstream>
#include <ctime>
#include <string>
#include <vector>
#include <list>

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

std::vector<std::string> Executive::checkAval(std::string Name)
{
	EventAdmin.clear();
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

/// <summary>
/// test
/// </summary>
//
//
//
//
//


void Executive::write() {
	using namespace std;
	if (events.empty()) {
		return;
	}
	else
	{

		ofstream writeStream("events.txt");
		if (writeStream.is_open()) {
			for (int i = 0; i < events.size();i++) {
				events[i].getAvailableTimes();
				writeStream << "Event: " << events[i].getName() << endl;
				writeStream << "Date: " << events[i].getDate() << endl;
				writeStream << "Admin: " << events[i].getAdmin() << endl;
				for (int j = 0; j < events[i].users.size(); j++) {
					if (events[i].users[j].getUserName() != events[i].getAdmin()) {
						writeStream << "User: " << events[i].users[j].getUserName() << endl;
						for (int k = 0; k < 54; k++) {
							if (events[i].users[j].getTime(k)) {
								writeStream << "Times: " << events[i].users[j].getStrings(k) << endl;
								writeStream << "Amount of available users: " << events[i].getNumOfUs(k) << endl;
							}
						}
					}
					
		//		for (User u : e.users) {
			//		if (u.getisAdmin()) {
				//		writeStream << "Admin: " << u.getName();
					//}
					//uh
				//	string t;
				//	for (std::time_t t : events[i].getAvailableTimes()) { //was u.availabilities
				//		writeStream << "Times: " << t;
				//	}
				}
			
					//uh
					
					}
				}
		writeStream << "\n";
		writeStream.close();
			}
		}

/*void Executive::read() {
	using namespace std;
	ifstream readStream("events.txt", ifstream::in);
	readStream.open("events.txt");
	if (readStream.is_open()) {
		while (!readStream.eof()) {
			// read and discard until "Event: "
			string line;
			while (getline(readStream, line) && line.find("Event: ") != 0)
			{
				string temp;
				while ((readStream.peek() != '\n')) { //reads in until next line character is found
					readStream >> temp;
					line = line + temp + " ";
				}
				if (line.at(line.length() - 1) == ' ') //gets rid of extra " " at end
				{
					line.erase(line.length() - 1);
				}
				string str = str.substr(7, line.size() - 7);//ignores the first 7 characters, takes the next line.size-7 characters
				Event newEvent = Event(); //TODO***send string to thing that should hold it
				newEvent.setEventName(str);
				while (getline(readStream, line) && line.find("Date: ") != 0) {
					string temp;
					while ((readStream.peek() != '\n')) { //reads in until next line character is found
						readStream >> temp;
						line = line + temp + " ";
					}
					if (line.at(line.length() - 1) == ' ') //gets rid of extra " " at end
					{
						line.erase(line.length() - 1);
					}
					string str = str.substr(6, line.size() - 6);//ignores the first 6 characters, takes the next line.size-6 characters
					newEvent.setEventDate(str); //TODO***store string in list
					while (getline(readStream, line) && line.find("Admin: ")) {
						string temp;
						while ((readStream.peek() != '\n')) { //reads in until next line character is found
							readStream >> temp;
							line = line + temp + " ";
						}
						if (line.at(line.length() - 1) == ' ') //gets rid of extra " " at end
						{
							line.erase(line.length() - 1);
						}
						string str = str.substr(7, line.size() - 7);//ignores the first 7 characters, takes the next line.size-7 characters
						User newUser = User();
						newUser.setName(str);
						newUser.setisAdmin(true);
						while (getline(readStream, line) && line.find("Times: ")) {
							string temp;
							while ((readStream.peek() != '\n')) { //reads in until next line character is found
								readStream >> temp;
								line = line + temp + " ";
							}
							if (line.at(line.length() - 1) == ' ') //gets rid of extra " " at end
							{
								line.erase(line.length() - 1);
							}
							string str = str.substr(6, line.size() - 6);//ignores the first 6 characters, takes the next line.size-6 characters
							int time = stoi(str, nullptr);
							newUser.AddTime(time);
						}
					}
					while (getline(readStream, line) && line.find("User: ")) {
						string temp;
						while ((readStream.peek() != '\n')) { //reads in until next line character is found
							readStream >> temp;
							line = line + temp + " ";
						}
						if (line.at(line.length() - 1) == ' ') //gets rid of extra " " at end
						{
							line.erase(line.length() - 1);
						}
						string str = str.substr(6, line.size() - 6);//ignores the first 6 characters, takes the next line.size-6 characters
						User newUser = User();
						newUser.setName(str);
						while (getline(readStream, line) && line.find("Times: ")) {
							string temp;
							while ((readStream.peek() != '\n')) { //reads in until next line character is found
								readStream >> temp;
								line = line + temp + " ";
							}
							if (line.at(line.length() - 1) == ' ') //gets rid of extra " " at end
							{
								line.erase(line.length() - 1);
							}
							string str = str.substr(6, line.size() - 6);//ignores the first 6 characters, takes the next line.size-6 characters
							int time = stoi(str, nullptr);
							newUser.AddTime(time);
						}
					}
				}
			}
		}
	}
	else
	{
		cout << "failed opening file" << endl;
		return;
	}
	readStream.close();
}​*/