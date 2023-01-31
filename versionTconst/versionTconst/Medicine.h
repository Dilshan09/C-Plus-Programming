#pragma once

class Medicine
{

private:

	int medicineID;
	char medicineName[20];
	char sickness[20];
	float dose;

public:
	Medicine();
	Medicine(int id, const char name[], const char sick[], float does);
	void setMedicineDetails(int id, const char name[], const char sick[], float does);
	void displayMedicineDetails();
	void setDose(float does);

};
