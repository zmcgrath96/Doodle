#include <algorithm>
#include "Event.h"

using namespace std;

Event::Event(){}

Event::Event(Day startDay, Day endDay, string name, User admin){
	m_startDay = startDay;
	m_endDay = endDay;
	m_name = name;
	m_admin = admin;
}

