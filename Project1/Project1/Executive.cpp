#include "Executive.h"
#include <iostream>
#include <fstream>
#include <ctime>
#include <string>
#include <vector>
#include <list>
#include <sstream>

using namespace std;


Executive::Executive()
{}

Executive::~Executive()
{
}
void Executive::AddEvent(Event E)
{
	events.push_back(E);  //takes in an event and adds it to the back of the event vector
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



void Executive::write() {

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
	line = "";

	// Iterate through list of events and write a file for each event
	std::string fName = "";
	Event tempEvent;
	for (int i = 0; i < events.size; i++) {
		tempEvent = events.at(i);
		//Open file
		fName = tempEvent.getName() + ".txt";
		ofile.open(fName);

		// Get start day and end day
		line = to_string(tempEvent.getStartDay().getMonth()) + "/" + to_string(tempEvent.getStartDay().getDay()) + "/" + to_string(tempEvent.getStartDay().getYear());
		ofile << line + "\n";
		line = tempEvent.getStartDay().getTime();
		ofile << line + "\n";
		line = to_string(tempEvent.getEndDay().getMonth()) + "/" + to_string(tempEvent.getEndDay().getDay()) + "/" + to_string(tempEvent.getEndDay().getYear());
		ofile << line + "\n";
		line = tempEvent.getEndDay().getTime();
		ofile << line + "\n";

		line = "";
		// Go through the list of tasks and write them all to one line
		std::vector<Task> tempTask = events.at(i).getTasks();
		for (int j = 0; j < tempEvent.getNumTasks(); j++) {
			line += tempTask.at(j).getTaskName() + "@" + tempTask.at(j).getMaster() + "|";
			
		}
		ofile << line + "\n";

		line = "";
		// Go throught the list of attendees and write them to file
		std::vector<User> tempUser = events.at(i).getUsers();
		for (int j = 0; j < tempEvent.getNumUsers(); j++){
			line += tempUser.at(j).getUserName() + "|";
		}
		ofile << line + "\n";

		// Close the output file
		ofile.close();
	} // Close for loop on event list

}// close write



void Executive::read(){

	std::ifstream ifile;
	std::string line;
	int lineNum = 0;
	std::string eventName;
	std::string adminName;

	// Ints for temp month, day, year, time
	int tempMonth;
	int tempDay;
	int tempYear; 
	int tempTime;

	// Variables for task
	std::string tempTaskName;
	std::string tempTaskUser;

	// Start by reading in the masterEvent.txt and populate event vector
	//-------------------------------------------------------------------------------------
	
	ifile.open("masterEvent.txt");

	// If file does not exist, return
	if (!ifile){
		return;
	}

	// If we have made it here, we need to parse masterEvent.txt
	Event tempEvent;
	
	while(getline(ifile, eventName, '@'))
	{
		getline(ifile, adminName);
		tempEvent.setName(eventName);
		User tempUser(adminName);
		AddEvent(tempEvent);
	}
	ifile.close();
	//------------------------------------------------------------------------------------
	// End reading of masterEvent.
	

	// Go through the list of events and read each file of each event and add data to that event
	//------------------------------------------------------------------------------------

	// Create a stringstream
	std::stringstream ss;

	// Iterate through the list of events
	for (int i = 0; i < events.size(); i++){

		// Get event name
		eventName = events.at(i).getName();

		// Open file of event name
		ifile.open(eventName);

		if(ifile){

			lineNum = 1;
			
			while(getline(ifile, line)){
				ss << line;

				//Grab the day
				if (lineNum == (1 || 3)){
					
					getline(ss, line, '/');
					tempMonth = stoi(line);
					getline(ss, line, '/');
					tempDay = stoi(line);
					getline(ss, line);
					tempYear = stoi(line);

				}

				// Grab the time
				else if (lineNum == (2 || 4)){

					getline(ss, line);
					tempTime = stoi(line);
					Day tempDay(tempMonth, tempDay, tempYear, tempTime);

					if (lineNum == 2){
						events.at(i).setStartDay(tempDay);
					}
					else{
						events.at(i).setEndDay(tempDay);
					}
				}

				// Grab the tasks and the users
				else if (lineNum == 5){
					
					while(getline(ss, line, '@')){
						
						tempTaskName = line;
						getline(ss, line, ('|' || '\n'));
						tempTaskUser = line;

						Task tempTask(tempTaskName);
						tempTask.setMaster(tempTaskUser);
						events.at(i).addTask(tempTask);
					}
				}

				// Grab the users and add it to the list of attendees
				else{
					while(getline(ss, line, ('|' || '\n'))){
						events.at(i).addUser(line);
					}
				}


				lineNum++;
			} // end while
		

		} // end if ifile

	} // end loop on list of events


		// Close file name
		ifile.close();

}
	//------------------------------------------------------------------------------------




////std::vector<std::string> executive::checkaval(std::string name)
////{
////	eventadmin.clear();
////	for(int i = 0; i<events.size();i++) //runs through the list of events
////	{
////		if(events[i].getadmin()==name) //checks if the name passed in is the admin of the event
////		{
////			cout<<"availabilities for "<<events[i].getname()<<endl;
////			//std::cout<<name<<"=="<<events[i].getadmin()<<std::endl;
////			eventadmin.push_back(events[i].getname());
////			cout<<name<<" is an admin of the event: "<<eventadmin[i]<<endl;
////			events[i].getavailabletimes();
////		}
////		else //if the name passed in is not the admin of the event
////		{
////			std::cout<<name<<"!="<<events[i].getadmin()<<std::endl;
////		}
////	}
////	return(eventadmin);
////}




// std::vector<std::string> Executive::checkAval(std::string Name)
// {
// 	EventAdmin.clear();
// 	for(int i = 0; i<events.size();i++) //runs through the list of events
// 	{
// 		if(events[i].getAdmin()==Name) //checks if the name passed in is the admin of the event
// 		{
// 			cout<<"Availabilities for "<<events[i].getName()<<endl;
// 			//std::cout<<Name<<"=="<<events[i].getAdmin()<<std::endl;
// 			EventAdmin.push_back(events[i].getName());
// 			cout<<Name<<" is an admin of the event: "<<EventAdmin[i]<<endl;
// 			events[i].getAvailableTimes();
// 		}
// 		else //if the name passed in is not the admin of the event
// 		{
// 			std::cout<<Name<<"!="<<events[i].getAdmin()<<std::endl;
// 		}
// 	}
// 	return(EventAdmin);
// }

// string* Executive::getAllEvents()
// {
// 	cout<<"All events"<<endl;
// 	const int eventSize = events.size();
// 	string* allEvents = new string[eventSize];


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