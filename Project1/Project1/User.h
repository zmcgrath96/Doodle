#ifndef User_h
#define User_h
#include <string>
class User
{
	public:
		User(std::string name, bool isAdmin);
		~User();
		std::string getName();
		void Run();
		void AddTime(int T);
		bool isAdmin();
	private:
		std::string m_Name;
		std::string * m_Strings;
		bool * m_Times;
		bool m_isAdmin;
};
#endif
