#include <iostream>
#include<cstring>
#include "Medicine.h"

using namespace std;

int main()
{
	float dose[3];


	Medicine m1(1, "Panadol", "Headache", 1.0);
	Medicine m2(2, "Vitamin C", "Cold", 1.5);
	Medicine m3(3, "Vicks", "Cough", 2.0);


	for (int i = 0; i < 3; i++) {

		cout << "Enter the new dose for item " << i + 1 << " = ";
		cin >> dose[i];
	}


	m1.setDose(dose[0]);
	m2.setDose(dose[1]);
	m3.setDose(dose[2]);

	m1.displayMedicineDetails();
	m2.displayMedicineDetails();
	m3.displayMedicineDetails();


}