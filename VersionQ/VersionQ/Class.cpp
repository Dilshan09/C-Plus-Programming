#include "Class.h"
#include<iostream>
using namespace std;


Class::Class()
{
	lectureName = "";
	subject = "";
	availableDay = "";
}

Class::Class(string P_lectureName, string P_subject, string P_availableDay)
{
	lectureName = P_lectureName;
	subject = P_subject;
	availableDay = P_availableDay;
}

void Class::setLectureDetails(string P_lectureName, string P_subject, string P_availableDay)
{
	lectureName = P_lectureName;
	subject = P_subject;
	availableDay = P_availableDay;
}

void Class::displayLectureDetails()
{
	cout << "LectureName = " << lectureName << endl;
	cout << "Subject = " << subject << endl;
	cout << "AvailableDay = " << availableDay << endl;
	cout << endl;
}

void Class::setAvailableDays(string P_availableDay)
{
	availableDay = P_availableDay;
}

string Class::getAvailableDays()
{
	return availableDay;
}

