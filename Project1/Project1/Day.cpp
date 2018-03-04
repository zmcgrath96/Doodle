#include "Day.h"


Day::Day() {

}

Day::Day(int eventMonth, int eventDay, int eventYear, int eventTime) {
    m_month = eventMonth;
    m_day = eventDay;
    m_year = eventYear;
    m_time = eventTime;
}

int Day::getMonth() {
	return(m_month);
}

int Day::getDay() {
	return(m_day);
}

int Day::getYear() {
	return(m_year);
}

int Day::getTime() {
	return(m_time);
}
