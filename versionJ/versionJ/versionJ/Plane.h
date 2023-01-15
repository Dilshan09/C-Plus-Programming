#pragma once
#include<iostream>
using namespace std;

class Plane
{
private:
	string planeID;
	string pilot;
	string destination;

public:
	Plane();
	Plane(string P_planeID, string P_pilot, string P_destination);
	void setPlaneDetails(string P_planeID, string P_pilot, string P_destination);
	void displayPlaneDetails();
	void setPilot(string P_pilot);
	string getDestination();
	string getPilot();
};

