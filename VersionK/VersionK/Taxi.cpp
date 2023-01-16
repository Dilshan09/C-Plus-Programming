#include "Taxi.h"
#include<iostream>
using namespace std;

Taxi::Taxi()
{
	taxiID = "";
	driver = "";
	ratePerKM = 0;
	distanceTravelled = 0;
}

Taxi::Taxi(string P_taxiID, string P_driver, int P_ratePerKM, int P_distanceTravelled)
{
	taxiID = P_taxiID;
	driver = P_driver;
	ratePerKM = P_ratePerKM;
	distanceTravelled = P_distanceTravelled;
}

void Taxi::setTaxiDetails(string P_taxiID, string P_driver, int P_ratePerKM, int P_distanceTravelled)
{
	taxiID = P_taxiID;
	driver = P_driver;
	ratePerKM = P_ratePerKM;
	distanceTravelled = P_distanceTravelled;
}

void Taxi::displayTaxiDetails()
{
	cout << "TaxiID = " << taxiID<<endl;
	cout << "Driver Name = " << driver << endl;
	cout << "BillAmount = " << ratePerKM * distanceTravelled << endl;
	cout << endl;
}

int Taxi::calculateBill()
{
	return ratePerKM* distanceTravelled;
}







































