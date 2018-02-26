#include "Day.h"

using namespace std;

Day::Day() {

}

Day::Day(int eventMonth, int eventDay, int eventYear, int eventTime) {
    m_month = eventMonth;
    m_day = eventDay;
    m_year = eventYear;
    m_time = eventTime;
}

Day::getMonth() {
	return(m_month);
}

Day::getDay() {
	return(m_day);
}

Day::getYear() {
	return(m_year);
}

Day::getTime() {
	return(m_time);
}
