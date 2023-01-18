#include "Train.h"
#include <iostream>
using namespace std;


int main()
{
string time[3];

	for (int i = 0; i < 3; i++)
	{
		cout << "Input new start time of train  " << i+1 << ":";
		cin >> time[i];
		
	}

	Train t1("1", "200", "6:00AM", "Kandy");
	Train t2("2", "150", "7:30AM", "Galle");
	Train t3("3", "300", "4:00AM", "Jaffna");

	
	t1.setStartTime(time[0]);
    t2.setStartTime(time[1]);
    t3.setStartTime(time[2]);

    t1.displayTrainDetails();
	t2.displayTrainDetails();
	t3.displayTrainDetails();

	return 0;
}
