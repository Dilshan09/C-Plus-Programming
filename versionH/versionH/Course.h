#pragma once
#include<iostream>
using namespace std;

class Course
{
private :
	string courseID;
	string courseName;
	int creditPoints;
public:
	Course();
	Course(string PcourseID, string PcourseName, int PcreditPoints);
	void setCourseDeails(string PcourseID, string PcourseName, int PcreditPoints);
	void DisplayCourseDetails();
    void setCreditPoints(int PcreditPoints);
	int getOOCCreditPoints();
	int getSPMCreditPoints();
	int getIWTCreditPoints();
	int getISDMCreditPoints();


};


