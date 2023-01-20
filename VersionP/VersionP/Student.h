#pragma once
#include <iostream>
using namespace std;

class Student
{
private :
	string studentID;
	string studentName;
	int marksOOC;
	int marksSPM;
	int marksISDM;
public :
	Student();
	Student(string P_studentID, string P_studentName, int P_marksOOC, int P_marksSPM, int P_marksISDM);
	void setStudentDetails(string P_studentID, string P_studentName, int P_marksOOC, int P_marksSPM, int P_marksISDM);
	void DisplayStudentDetails();
	string getStudentID();
	int getMarksSPM();
	int getMarksISDM();
	int getMarksOOC();

};

