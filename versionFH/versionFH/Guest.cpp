#include <iostream>
#include "Guest.h"
using namespace std;

Guest::Guest()
{
	guestID = "";
	guestName = "";
	ratePerDay = 0;
	numberOfDays = 0;
}
Guest::Guest(string PguestID, string PguestName, int PratePerDay, int PnumberOfDays)
{
	guestID = PguestID;
	guestName = PguestName;
	ratePerDay = PratePerDay;
	numberOfDays = PnumberOfDays;
}
void Guest::setGuestDetails(string PguestID, string PguestName, int PratePerDay, int PnumberOfDays)
{
	 guestID = PguestID;
	 guestName = PguestName;
	 ratePerDay = PratePerDay;
	 numberOfDays = PnumberOfDays;
}
void Guest::displayGuestDetails()
{
	cout << "guestID = " << guestID << endl;
	cout << "guestName = " << guestName << endl;
	cout << "BillAmount = " << ratePerDay * numberOfDays << endl;
	cout << endl;
}
int Guest::calculateGuestBill()
{
	  return ratePerDay* numberOfDays;
}