#include <iostream>
#include "Vehicle.h"
using namespace std;

int main()
{

	Vehicle v1(1, "Toyota", "SUV",85000000 );
	Vehicle v2(2, "Nissan", "Saloon", 60000000);
	Vehicle v3(3, "Honda", "Convertible",72000000);

	v1.setVehiclePeice(v1.getPrice());
	v2.setVehiclePeice(v2.getPrice());
	v3.setVehiclePeice(v3.getPrice());


	v1.displayVehicleDetails();
	v2.displayVehicleDetails();
	v3.displayVehicleDetails();

}

