#include "Child.h"
#include<iostream>
using namespace std;

Child::Child()
{
	childID = 0;
	childName = "";
	parentName = "";
	contactNo = 0;
}

Child::Child(int kchildID, string kchildName, string kparentName, int kcontactNo)
{
	childID = kchildID;
	childName = kchildName;
	parentName = kparentName;
	contactNo = kcontactNo;
}

void Child::setChildDetails(int kchildID, string kchildName, string kparentName, int kcontactNo)
{
	childID = kchildID;
	childName = kchildName;
	parentName = kparentName;
	contactNo = kcontactNo;
}

void Child::displayChildDetails()
{
	cout << "Child Name:" << childName << endl;
	cout << "Parent Name:" << parentName << endl;
	cout << "Contact Number:" << contactNo << endl;
	cout << endl;
}

void Child::setContactNo(int P_contactNo)
{
	contactNo = P_contactNo;

}

int Child::getsetContactNo()
{
	return contactNo;
}




