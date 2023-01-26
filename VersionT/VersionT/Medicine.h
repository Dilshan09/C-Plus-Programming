#pragma once

#include<iostream>

using namespace std;

class Medicine
{

private:
	int medicineID;
	string medicineName;
	string sickness;
	float dose;

public:

	void setMedicineDetails(int id, string name, string sick, float does);
	void displayMedicineDetails();
	void setDose(float does);

};