#include "Course.h"
#include<iostream>
using namespace std;

int main()
{
	Course c1("1050", "OOC", 2);
	Course c2("1060", "SPM", 3);
	Course c3("1100", "IWT", 4);
	Course c4("1090", "ISDM",4);

	c1.setCreditPoints(c1.getOOCCreditPoints());
	c2.setCreditPoints(c1.getSPMCreditPoints());
	c3.setCreditPoints(c1.getIWTCreditPoints());
	c4.setCreditPoints(c1.getISDMCreditPoints());

	c1.DisplayCourseDetails();
	c2.DisplayCourseDetails();
	c3.DisplayCourseDetails();
	c4.DisplayCourseDetails();

}

