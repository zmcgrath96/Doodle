﻿#include "Executive.h"
#include <iostream>
#include <fstream>
#include <ctime>
#include <string>
#include <vector>
#include <list>

using namespace std;
Executive::Executive()
{

	//Start by writing masterEvent file
	std::ofstream ofile;
	ofile.open("masterEvent.txt");
	std::string line = "";
	
	//Iterate through the vector "events" and find all to write
	for (int i = 0; i < events.size(); i++) {
		line = events.at(i).getName() + "@" + events.at(i).getAdmin().getUserName();
		ofile << line + "\n";
	}

	ofile.close;

	// Iterate through list of events and write a file for each event
	std::string fName = "";
	Event tempEvent;
	for (int i = 0; i < events.size; i++) {
		tempEvent = events.at(i);
		//Open file
		fName = tempEvent.getName() + ".txt";
		ofile.open(fName);

		// Get start day and end day
		line = tempEvent.getStartDay().getMonth() + "/" + tempEvent.getStartDay().getDay() + "/" + tempEvent.getStartDay().getYear();
		ofile << line + "\n";
		line = tempEvent.getStartDay().getTime();
		ofile << line + "\n";
		line = tempEvent.getEndDay().getMonth() + "/" + tempEvent.getEndDay().getDay() + "/" + tempEvent.getEndDay().getYear();
		ofile << line + "\n";
		line = tempEvent.getEndDay().getTime();
		ofile << line + "\n";

		Task* temp = events.at(i).getTasks();
		for (int j = 0; j < tempEvent.getNumTasks(); j++) {
			
		}



		// Close the output file
		ofile.close();
	}

}

Executive::~Executive()
{
}
void Executive::AddEvent(Event E)
{
	events.push_back(E);  //takes in an event and adds it to the back of the event vector
}

std::vector<std::string> Executive::checkAval(std::string Name)
{
	EventAdmin.clear();
	for(int i = 0; i<events.size();i++) //runs through the list of events
	{
		if(events[i].getAdmin()==Name) //checks if the name passed in is the admin of the event
		{
			cout<<"Availabilities for "<<events[i].getName()<<endl;
			//std::cout<<Name<<"=="<<events[i].getAdmin()<<std::endl;
			EventAdmin.push_back(events[i].getName());
			cout<<Name<<" is an admin of the event: "<<EventAdmin[i]<<endl;
			events[i].getAvailableTimes();
		}
		else //if the name passed in is not the admin of the event
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
	}
	return allEvents;
}

int Executive::getEventSize() {
	return events.size();
}

void Executive::write() {


	
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