#include<iostream>
using namespace std;

class Vehicle
{
private:
	int VehicleID;
	string VehicleBrand;
	string Type;
	int VehiclePrice;

public:
	Vehicle();
	Vehicle(int tvehicleID, string tvehicleBrand, string ttype, int tvehiclePrice);
	void setDetails(int tvehicleID, string tvehicleBrand, string ttype, int tvehiclePrice);
	void setVehiclePeice(int tvehiclePrice);
	void displayVehicleDetails();
	int getPrice();
};

