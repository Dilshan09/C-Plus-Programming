#include "Taxi.h"
#include<iostream>
using namespace std;


int main()
{ 
	Taxi t1("1234", "Ben", 150, 10);
	Taxi t2("4321", "Chris", 250, 4);
	Taxi t3("3434", "Nick", 175, 2);

	t1.calculateBill();
	t2.calculateBill();
	t3.calculateBill();

	t1.displayTaxiDetails();
	t2.displayTaxiDetails();
	t3.displayTaxiDetails();

}
