#include "Child.h"
#include<iostream>
#include<cstring>

using namespace std;

Child::Child()
{
	childID = 0;
	strcpy_s(childName, "");
	strcpy_s(parentName, "");
	strcpy_s(AgeGroup, "");
	contactNo = 0;
}

Child::Child(int P_childID, const char P_childName[], const char P_parentName[], const char P_AgeGroup[], int P_contactNo)
{
	childID = P_childID;
	strcpy_s(childName, P_childName);
	strcpy_s(parentName, P_parentName);
	strcpy_s(AgeGroup, P_AgeGroup);
	contactNo = P_contactNo;
}

void Child::setChildDetails(int P_childID, const char P_childName[], const char P_parentName[], const char P_AgeGroup[], int P_contactNo)
{
	childID = P_childID;
	strcpy_s(childName, P_childName);
	strcpy_s(parentName, P_parentName);
	strcpy_s(AgeGroup, P_AgeGroup);
	contactNo = P_contactNo;
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



















