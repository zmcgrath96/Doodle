#pragma once
#include <string>
#include <vector>
#include <ctime>
#include <list>

class User {
public:
	User(std::string name, bool isAdmin);
	std::string getName();
	bool isAdmin();
	void addAvailabilities();
	bool operator==(User &other);
	
	std::vector<std::time_t> availabilities;

private:
	bool admin;
	std::string name;
=======
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
>>>>>>> User
};
#endif
