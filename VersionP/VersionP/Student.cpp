#include "Student.h"
#include <iostream>
#include <iomanip>

using namespace std;


Student::Student()
{
	 studentID = "";
	 studentName = "";
	 marksOOC = 0;
	 marksSPM = 0;
	 marksISDM = 0;
}

Student::Student(string P_studentID, string P_studentName, int P_marksOOC, int P_marksSPM, int P_marksISDM)
{
	studentID = P_studentID;
	studentName = P_studentName;
	marksOOC = P_marksOOC;
	marksSPM = P_marksSPM;
	marksISDM = P_marksISDM;
}

void Student::setStudentDetails(string P_studentID, string P_studentName, int P_marksOOC, int P_marksSPM, int P_marksISDM)
{
	studentID = P_studentID;
	studentName = P_studentName;
	marksOOC = P_marksOOC;
	marksSPM = P_marksSPM;
	marksISDM = P_marksISDM;

}

void Student::DisplayStudentDetails()
{
	cout << "StudentID =" << studentID << endl;
	cout << "StudentName =" << studentName << endl;
	cout << "MarksOOC =" << marksOOC << endl;
	cout << "MarksSPM =" << marksSPM << endl;
	cout << "MarksISDM =" << marksISDM << endl;
	cout << "Total Marks =" << marksOOC+ marksSPM+ marksISDM << endl;
	cout << "Average Mark =" <<setprecision(2) <<(marksOOC + marksSPM + marksISDM)/3 << endl;//setw(5)<<setiosflags(ios::fixed)<<
	cout << endl;
}

string Student::getStudentID()
{
	return studentID;
}

int Student::getMarksSPM()
{
	return marksSPM;
}

int Student::getMarksISDM()
{
	return marksISDM;
}

int Student::getMarksOOC()
{
	return marksOOC;
}
























