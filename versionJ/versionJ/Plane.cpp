#include "Plane.h"
#include<iostream>
using namespace std;


Plane::Plane()
{
	destination = "";
	pilot = "";
	destination = "";
}

Plane::Plane(string P_planeID, string P_pilot, string P_destination)
{
	planeID = P_planeID;
	pilot = P_pilot;
	destination = P_destination;
}

void Plane::setPlaneDetails(string P_planeID, string P_pilot, string P_destination)
{
	planeID = P_planeID;
	pilot = P_pilot;
	destination = P_destination;
}
void Plane::setPilot(string P_pilot)
{
	pilot = P_pilot;
}
void Plane::displayPlaneDetails()
{
	cout << "Plane ID =" << planeID << endl;
    cout << "Pilot =" << pilot << endl;
    cout << "Destination =" << destination << endl;
	cout << endl;
}
string Plane::getDestination()
{
	return destination;
}
string Plane::getPilot()
{
	for (int i = 0; i < 4 ;i++)
	{
		string bird;
		cout << "Input new pilot of plane " << i+1 << ":";
		cin >> bird;
		return bird;
	}
	
}










