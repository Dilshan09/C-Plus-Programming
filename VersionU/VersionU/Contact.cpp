#include "Contact.h"
#include<iostream>
#include<cstring>

using namespace std;

Contact::Contact()
{
	salesmanId = 0;
	strcpy_s(salesmanname, "");
	salary = 0;
	contactNo = 0;
}

Contact::Contact(int psalesmanId, const char psalesmanname[], long int psalary, long int pcontactNo)
{
	salesmanId = psalesmanId;
	strcpy_s(salesmanname, psalesmanname);
	salary = psalary;
	contactNo = pcontactNo;
}

void Contact::setSalesmanDetails(int psalesmanId, const char psalesmanname[], long int psalary, long int pcontactNo)
{
	salesmanId = psalesmanId;
	strcpy_s(salesmanname, psalesmanname);
	salary = psalary;
	contactNo = pcontactNo;
}

void Contact::displaySalesmanDetails()
{
	cout << endl;
	cout << "salesmanId : " << salesmanId << endl;
	cout << "salesmanname : " << salesmanname << endl;
	cout << "salary : " << salary << endl;
	cout << "contactNo : " << contactNo << endl;
}

void Contact::setSalesmancontactNumber(long int pcontactNo)
{
	contactNo = pcontactNo;
}

long int Contact::getSalesmancontactNumber()
{
	return contactNo;
}

















