#pragma once
class Contact
{
private:
	int salesmanId;
	char salesmanname[20];
	long int salary;
	long int contactNo;

public:
	Contact();
	Contact(int psalesmanId, const char psalesmanname[], long int psalary, long int pcontactNo);
	void setSalesmanDetails(int psalesmanId, const char psalesmanname[], long int psalary, long int pcontactNo);
	void displaySalesmanDetails();
	void setSalesmancontactNumber(long int pcontactNo);
	long int getSalesmancontactNumber();
};

