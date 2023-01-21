#pragma once
#include<iostream>
using namespace std;

class Class
{
private:
	string lectureName;
	string subject;
	string availableDay;

public:
	Class();
	Class(string P_lectureName, string P_subject, string P_availableDay);
	void setLectureDetails(string P_lectureName, string P_subject, string P_availableDay);
	void displayLectureDetails();
	void setAvailableDays(string P_availableDay);
	string getAvailableDays();

};

