#include "Student.h"
#include <iostream>

using namespace std;

int main()

{
	Student  s1("1234","Kylie",75,80,60);
	Student  s2("4321", "James", 65, 70, 85);
	Student  s3("6543", "Kyson", 90, 85, 80);


	s1.DisplayStudentDetails();
	s2.DisplayStudentDetails();
	s3.DisplayStudentDetails();

}
