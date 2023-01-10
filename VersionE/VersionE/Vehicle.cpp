#include "Vehicle.h"
#include<iostream>
using namespace std;


Vehicle::Vehicle()
{
	VehicleID = 0;
	VehicleBrand = "";
	Type = "";
	VehiclePrice = 0;
}

Vehicle::Vehicle(int tvehicleID, string tvehicleBrand, string ttype, int tvehiclePrice)
{
	VehicleID = tvehicleID;
	VehicleBrand = tvehicleBrand;
	Type = ttype;
	VehiclePrice = tvehiclePrice;
}

void Vehicle::setDetails(int tvehicleID, string tvehicleBrand, string ttype, int tvehiclePrice)
{
	VehicleID = tvehicleID;
	VehicleBrand = tvehicleBrand;
	Type = ttype;
	VehiclePrice = tvehiclePrice;
}

void Vehicle::setVehiclePeice(int tvehiclePrice)
{
	VehiclePrice = tvehiclePrice;
}

void Vehicle::displayVehicleDetails()
{
	cout << "VehicleID :" << VehicleID << endl;
	cout << "VehicleBrand :" << VehicleBrand << endl;
	cout << "Type :" << Type << endl;
	cout << "VehiclePrice :" << VehiclePrice << endl;
	cout << endl;
}   
int Vehicle::getPrice()
{
	int Price;
	cout << "Eneter Price :";
	cin >> Price;

	return Price;
}