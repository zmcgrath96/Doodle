#ifndef User_h
#define User_h
#include <iostream>
#include <string>
class User
{
	public:
		User();
		/**
		*	Creates the bool array m_Times and sets it to false. Creates the m_Strings array and populates it with the possible time slots.
		*	@param None
		*	@return None
		*/
		User(std::string name);

		/**
		*	Does Nothing
		*	@param None
		*	@return None
		*/
		~User();

		/**
		*	Returns the name of the user
		*	@param None
		*	@return The string representing the name of the user
		*/
		std::string getUserName();

		
	private:
		std::string m_Name; //the name of the user
};
#endif
