#include "Medicine.h"
#include<iostream>
#include<cstring>

using namespace std;


Medicine::Medicine()
{
	medicineID = 0;
	strcpy_s(medicineName, "");
	strcpy_s(sickness, "");
	dose = 0.0;
}
Medicine::Medicine(int id, const char name[], const char sick[], float does)
{
	medicineID = id;
	strcpy_s(medicineName, name);
	strcpy_s(sickness, sick);
	dose = does;
}
void Medicine::setMedicineDetails(int id, const char name[], const char sick[], float does) {

	medicineID = id;
	strcpy_s(medicineName , name);
	strcpy_s(sickness , sick);
	dose = does;
}


void Medicine::setDose(float does) {

	dose = does;
}
void Medicine::displayMedicineDetails() {

	cout << "----------------------------------" << endl;
	cout << "Medicine id =" << medicineID << endl;
	cout << "Medicine name= " << medicineName << endl;
	cout << "sickness =" << sickness << endl;
	cout << "dose = " << dose << endl;
	cout << "----------------------------------" << endl;
}