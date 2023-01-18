#include "Train.h"
#include <iostream>
using namespace std;


Train::Train() {

	trainID = "";
	capacity = "";
	startTime = "";
	destination = "";

}

Train::Train(string P_trainID, string P_capacity, string P_startTime, string P_destination) {

	trainID = P_trainID;
	capacity = P_capacity;
	startTime = P_startTime;
	destination = P_destination;

}

void Train::setTrainDetails(string P_trainID, string P_capacity, string P_startTime, string P_destination){

	trainID = P_trainID;
	capacity = P_capacity;
	startTime = P_startTime;
	destination = P_destination;

}

void Train::displayTrainDetails(){

	cout << "TrainID = " << trainID << endl;
	cout << "Capacity = " << capacity << endl;
	cout << "StartTime = " << startTime << endl;
	cout << "TrainID = " << destination << endl;
	cout << endl << endl;

}

void Train::setStartTime(string P_startTime) {

	startTime = P_startTime;

}

string Train::getStartTime() {


	
	return startTime;


}