#ifndef User_h
#define User_h
#include <iostream>
#include <string>
class User
{
	public:
		User();
		~User();
		void setName(std::string name);
		std::string getUserName();
		bool getTime(int i);
		std::string getStrings(int j);
		void AddTime(int T);
		void getTimes();
	private:
		std::string m_Name;
		std::string * m_Strings;
		bool * m_Times;
		bool m_isAdmin;
};
#endif
