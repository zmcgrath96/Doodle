#include "Executive.h"
#include "Event.h"
#include "User.h"
#include <iostream>
using namespace std;
int main(int argc, char * argv[])
{
	Executive Exec;
	Event E;
	E.setEventName("B-day");
	E.setEventDate("Feb.2");
	User A;
	A.setName("Nick");
	User B;
	B.setName("Ryan");
	User C;
	C.setName("Jack");
	A.AddTime(1);
	A.AddTime(2);

	B.AddTime(1);
	B.AddTime(2);

	C.AddTime(5);
	C.AddTime(6);

	E.addUser(A);
	E.addUser(B);
	E.addUser(C);
	E.setAdmin("Ryan");
	Exec.AddEvent(E);
	Exec.getAllEvents(); //prints all event names
	cout<<"-------------------------------"<<endl;
	Exec.checkAval("Ryan"); //prints all times under event names 
	return 0;
}
