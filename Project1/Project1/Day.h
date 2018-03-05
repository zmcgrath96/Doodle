#ifndef DAY_H
#define DAY_H

#include <string>

class Day {
    public: 
    /**
		*	Constructor
		*	@param None
		*	@return None
		*/
    Day();

    /**
		*	Constructor
		*	@param ints
		*	@return None
		*/
    Day(int eventMonth, int eventDay, int eventYear);

	/**
	*	getMonth
	*	@param none
	*	@return int
	*/
	int getMonth();

	/**
	*	getDay
	*	@param none
	*	@return int
	*/
	int getDay();

	/**
	*	getYear
	*	@param none
	*	@return int
	*/
	int getYear();

	/**
	*	getTime
	*	@param none
	*	@return int
	*/
	int getTime();

	/**
	*	setMonth
	*	@param int
	*	@return none
	*/
	void setMonth(int tMonth);

	/**
	*	setDay
	*	@param int
	*	@return none
	*/
	void setDay(int tDay);

	/**
	*	setYear
	*	@param int
	*	@return none
	*/
	void setYear(int tYear);
	/**
	*	setTime
	*	@param int
	*	@return none
	*/
	void setTime(int tTime);


    private:
        int m_month; // Integer that keeps track of month
        int m_day; // Integer that keeps track of day
        int m_year; // Integer that keeps track of year
        int m_time;  // time is in minutes from the beggining of the day.

};
#endif