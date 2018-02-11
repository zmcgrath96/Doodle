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
	A.setisAdmin(true);
	User B;
	B.setName("Ryan");
	B.setisAdmin(false);
	User C;
	C.setName("Jack");
	C.setisAdmin(true);
	A.AddTime(1);
	A.AddTime(2);

	B.AddTime(3);
	B.AddTime(4);

	C.AddTime(5);
	C.AddTime(6);

	E.addUser(A);
	E.addUser(B);
	E.addUser(C);
	Exec.AddEvent(E);
	Exec.getAllEvents(); //prints all event names
	cout<<"-------------------------------"<<endl;
	Exec.checkAval(); //prints all times under event names 
	return 0;
}
