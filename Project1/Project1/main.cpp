#include "Event.h"
#include "User.h"
#include <iostream>
using namespace std;
int main(int argc, char * argv[])
{
	Event E("B-day","Feb2");
	User A("Nick",true);
	cout<<endl;
	User B("Ryan",false);
	cout<<endl;
	User C("Jack",true);
	A.AddTime(1);
	A.AddTime(2);

	B.AddTime(3);
	B.AddTime(4);

	C.AddTime(5);
	C.AddTime(6);

	E.addUser(A);
	E.addUser(B);
	E.addUser(C);
	cout<<"Event name: "<<E.getName()<<endl;
	cout<<"Event date: "<<E.getDate()<<endl;
	E.getAvailableTimes();
	E.getUsers();
	return 0;
}
