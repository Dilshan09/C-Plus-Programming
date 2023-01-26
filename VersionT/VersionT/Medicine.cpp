#include "Medicine.h"
#include<iostream>
#include<cstring>

using namespace std;


void Medicine::setMedicineDetails(int id, string name, string sick, float does) {

	medicineID = id;
	medicineName = name;
	sickness = sick;
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