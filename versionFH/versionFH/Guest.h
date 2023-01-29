#pragma once
#include <iostream>
#include "Guest.h"
using namespace std;

class Guest
{
private :
	string guestID;
	string guestName;
	int ratePerDay;
	int numberOfDays;
public:
	Guest();
	Guest(string PguestID, string PguestName, int PratePerDay, int PnumberOfDays);
	void setGuestDetails(string PguestID, string PguestName, int PratePerDay, int PnumberOfDays);
	void displayGuestDetails();
	int calculateGuestBill();

};

