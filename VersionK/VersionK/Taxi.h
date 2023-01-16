#pragma once
#include<iostream>
using namespace std;

class Taxi
{
private :
	string taxiID;
	string driver;
	int ratePerKM;
	int distanceTravelled;

public:
	Taxi();
	Taxi(string P_taxiID, string P_driver, int P_ratePerKM, int P_distanceTravelled);
	void setTaxiDetails(string P_taxiID, string P_driver, int P_ratePerKM, int P_distanceTravelled);
	void displayTaxiDetails();
	int calculateBill();
};

