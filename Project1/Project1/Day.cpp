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

