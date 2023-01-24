#pragma once
#include<iostream>

using namespace std;

class Child
{
private:
	int childID;
	char childName[20];
	char parentName[20];
	char AgeGroup[20];
	int contactNo;

public:
	Child();
	Child(int P_childID, const char P_childName[], const char P_parentName[], const char P_AgeGroup[],int P_contactNo);
	void setChildDetails(int P_childID, const char P_childName[], const char P_parentName[], const char P_AgeGroup[], int P_contactNo);
	void displayChildDetails();
	void setContactNo(int P_contactNo);
	int getsetContactNo();
};

