#ifndef User_h
#define User_h
#include <iostream>
#include <string>
class User
{
	public:
		/*
		*	Creates the bool array m_Times and sets it to false. Creates the m_Strings array and populates it with the possible time slots.
		*	@param None
		*	@return None
		*/
		User();

		/*
		*	Does Nothing
		*	@param None
		*	@return None
		*/
		~User();

		/*
		*	Sets the user's name
		*	@param String representing the name of the user
		*	@return None
		*/
		void setName(std::string name);

		/*
		*	Returns the name of the user
		*	@param None
		*	@return The string representing the name of the user
		*/
		std::string getUserName();

		/*
		*	Returns a bool at the index passed in which represents whether the user is avaliable at that time
		*	@param An int representing an index in the boolean array m_Times
		*	@return The boolean stored at the given index
		*/
		bool getTime(int i);

		/*
		*	Returns the string at the index passed in which represents a time slot
		*	@param An int representing an index in the string array m_Strings
		*	@return The string at the given index
		*/
		std::string getStrings(int j);

		/*
		*	Toggles the bool at the given index
		*	@param An index representing a bool in m_Times
		*	@return None
		*/
		void AddTime(int T);

		/*
		*	Prints the times that the user is avaliable
		*	@param None
		*	@return None
		*/
		void getTimes();
	private:
		std::string m_Name; //the name of the user
		std::string * m_Strings; //an array of strings representing all the possible time slots
		bool * m_Times; //an array of bools representing whether the user is avaliable at the associated times
		bool m_isAdmin; //a bool representing whether the user is the admin of the event they are in
};
#endif
