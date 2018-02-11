#ifndef User_h
#define User_h
#include <iostream>
#include <string>
class User
{
	public:
		User(std::string UserName, bool isAdmin);
		~User();
		void setName(std::string name);
		void setisAdmin(bool isAdmin);
		std::string getName();
		bool getisAdmin();
		void Run();
		void AddTime(int T);
		bool isAdmin();
		void getTimes();
	private:
		std::string m_Name;
		std::string * m_Strings;
		bool * m_Times;
		bool m_isAdmin;
};
#endif
