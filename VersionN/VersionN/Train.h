#pragma once
#include <iostream>
using namespace std;

class Train
{
private:
	string trainID;
	string capacity;
	string startTime;
	string destination;

public:
	Train();
	Train(string P_trainID, string P_capacity, string P_startTime, string destination);
	void setTrainDetails(string P_trainID, string P_capacity, string P_startTime, string destination);
	void displayTrainDetails();
	void setStartTime(string P_startTime);
	string getStartTime();
	
};

