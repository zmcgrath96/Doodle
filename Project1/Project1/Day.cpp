#include "Day.h"


Day::Day() {

}

Day::Day(int eventMonth, int eventDay, int eventYear) {
    m_month = eventMonth;
    m_day = eventDay;
    m_year = eventYear;
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

void Day::setMonth(int tMonth) {
	m_month = tMonth;
}

void Day::setDay(int tDay) {
	m_day = tDay;
}

void Day::setYear(int tYear) {
	m_year = tYear;
}

void Day::setTime(int tTime) {
	m_time = tTime;
}