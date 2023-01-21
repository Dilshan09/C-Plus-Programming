#include "Class.h"
#include<iostream>
using namespace std;


int main()
{
	Class c1("Ms.Shalini", "OOC", "Tuesday");
	Class c2("Ms.Losini", "IWT", "Wednesday");
	Class c3("Ms.Lokesha", "OOC", "Thursday");

	string day1, day2 ,day3;
    cout << "Input available day of Ms.Shalini :";
	cin >> day1;

    cout << "Input available day of Ms.Losini :";
	cin >> day2;

	cout << "Input available day of Ms.Lokesha :";
	cin >> day3;
	
	c1.setAvailableDays(day1);
	c2.setAvailableDays(day2);
	c3.setAvailableDays(day3);

	c1.displayLectureDetails();
	c2.displayLectureDetails();
	c3.displayLectureDetails();

	return 0;
}
