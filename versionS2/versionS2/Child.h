#pragma once
#include<iostream>

using namespace std;

class Child
{
private:
	int childID;
	string childName;
	string parentName;
	int contactNo;

public:
	Child();
	Child(int kchildID, string kchildName, string kparentName, int kcontactNo);
	void setChildDetails(int kchildID, string kchildName, string kparentName, int kcontactNo);
	void displayChildDetails();
	void setContactNo(int kcontactNo);
	int getsetContactNo();
};
