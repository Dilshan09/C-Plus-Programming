#include <iostream>
#include "Guest.h"

int main()
{
    Guest g1("1212", "Jarden", 4500 , 4);
    Guest g2("1122", "Ben", 3000 , 3);
    Guest g3("1234", "Ruby", 5750 , 2);

    g1.calculateGuestBill();
    g2.calculateGuestBill();
    g3.calculateGuestBill();

    g1.displayGuestDetails();
    g2.displayGuestDetails();
    g3.displayGuestDetails();

}
