#include "Course.h"
#include<iostream>
using namespace std;

Course::Course()
{
	courseID = "";
	courseName = "";
	creditPoints = 0;
}
Course::Course(string PcourseID, string PcourseName, int PcreditPoints)
{
	courseID = PcourseID;
	courseName = PcourseName;
	creditPoints = PcreditPoints;
}
void Course::setCourseDeails(string PcourseID, string PcourseName, int PcreditPoints)
{
	courseID = PcourseID;
	courseName = PcourseName;
	creditPoints = PcreditPoints;
}
void Course::setCreditPoints(int PcreditPoints)
{
	creditPoints = PcreditPoints;
}
void Course::DisplayCourseDetails()
{
	cout << "courseID = " << courseID << endl;
	cout << "courseName = " << courseName << endl;
	cout << "creditPoints = " << creditPoints << endl;
	cout << endl;
}
int Course::getOOCCreditPoints()
{
	int IOOC;

	cout << "Input new OOC credit points : " ;
	cin >> IOOC;
	return IOOC;
}
int Course::getSPMCreditPoints()
{
	int ISPM;
	cout << "Input new SPM credit points : ";
	cin >> ISPM;
	return ISPM;
}
int Course::getIWTCreditPoints()
{
	int IIWT;
	cout << "Input new IWT credit points : ";
	cin >> IIWT;
	return IIWT;
}
int Course::getISDMCreditPoints()
{
	int IISDM;
	cout << "Input new ISDM credit points : ";
	cin >> IISDM;
	return IISDM;
}
