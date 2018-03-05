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
{
}

Executive::~Executive()
{
}
void Executive::AddEvent(Event E)
{
	if (E.getName() != "") {
		events.push_back(E);  //takes in an event and adds it to the back of the event vector
	}
}


std::string* Executive::getAllEvents()
{
	cout<<"All events"<<endl;
	int eventSize = events.size();
	std::string* allEvents = new string[eventSize];
	for(int i = 0; i<eventSize; i++)
	{
		allEvents[i] = events.at(i).getName();
		//cout<<events[i].getName()<<endl;
	}
	return allEvents;
}



int Executive::getEventSize() {
	return events.size();
}



void Executive::write() {

	// Check if theres anything in the events
	if (events.size() ==  0){
		return;
	}

	//Start by writing masterEvent file
	std::ofstream ofile;
	ofile.open("masterEvent.txt");
	std::string line = "";

	//Iterate through the vector "events" and find all to write
	for (int i = 0; i < events.size(); i++) {
		line = events.at(i).getName() + "@" + events.at(i).getAdmin().getUserName();
		ofile << line + "\n";
	}

	ofile.close();
	line = "";

	// Iterate through list of events and write a file for each event
	std::string fName = "";
	Event tempEvent;
	int eventSize = events.size();
	for (int i = 0; i < eventSize; i++) {
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
					Day tempday(tempMonth, tempDay, tempYear, tempTime);

					if (lineNum == 2){
						events.at(i).setStartDay(tempday);
					}
					else{
						events.at(i).setEndDay(tempday);
					}
				}

				// Grab the tasks and the users
				else if (lineNum == 5){
					
					while(getline(ss, line, '@')){
						
						tempTaskName = line;
						getline(ss, line, '|');
						tempTaskUser = line;

						Task tempTask(tempTaskName);
						tempTask.setMaster(tempTaskUser);
						events.at(i).addTask(tempTask);
					}
				}

				// Grab the users and add it to the list of attendees
				else{
					while(getline(ss, line, '|')){
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


