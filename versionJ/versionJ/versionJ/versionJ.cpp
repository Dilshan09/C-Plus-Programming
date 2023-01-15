#include "Plane.h"
#include<iostream>
using namespace std;

int main()
{
	Plane p1("1", "John", "USA");
	Plane p2("2", "George", "UK");
	Plane p3("3", "Heny", "USA");
	Plane p4("4", "Ronaldo", "UAE");


	p1.setPilot(p1.getPilot());
	p2.setPilot(p2.getPilot());
	p3.setPilot(p3.getPilot());
	p4.setPilot(p4.getPilot());


	p1.displayPlaneDetails();
	p2.displayPlaneDetails();
	p3.displayPlaneDetails();
	p4.displayPlaneDetails();

}

