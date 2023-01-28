#include "Event.h"
#include <iostream>
#include<cstring>

using namespace std;

int main()
{
	Event e1(1, "party", "red", "nugegoda");
	Event e2(2, "wedding", "purple", "maharagama");
	Event e3(3, "party", "pink", "malabe");

	char newl1[20], newl2[20], newl3[20];

		cout << "new location :";
		cin >> newl1;
		cout << "new location :";
		cin >> newl2;
		cout << "new location :";
		cin >> newl3;

	e1.setEventLocation(newl1);
	e2.setEventLocation(newl2);
	e3.setEventLocation(newl3);


	e1.displayEventDetails();
	e2.displayEventDetails();
	e3.displayEventDetails();

}
