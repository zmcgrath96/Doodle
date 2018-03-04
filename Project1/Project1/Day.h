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
    Day(int eventMonth, int eventDay, int eventYear, int eventTime);

	/**
	*	Constructor
	*	@param none
	*	@return int
	*/
	int getMonth();

	/**
	*	Constructor
	*	@param none
	*	@return int
	*/
	int getDay();

	/**
	*	Constructor
	*	@param none
	*	@return int
	*/
	int getYear();

	/**
	*	Constructor
	*	@param none
	*	@return int
	*/
	int getTime();


    private:
        int m_month; // Integer that keeps track of month
        int m_day; // Integer that keeps track of day
        int m_year; // Integer that keeps track of year
        int m_time;  // time is in seconds from the beggining of the day.

};
#endif