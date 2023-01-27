#include "Contact.h"
#include<iostream>
#include<cstring>

using namespace std;


int main()
{
	Contact c1(1, "John", 30000, 772358375);
	Contact c2(2, "Ann", 40000, 77302942);
	Contact c3(3, "Leema", 35000, 7782294526);

	/*long int number[3];
	for (int i = 0; i < 3; i++)
	{
		cout << "Enter new contact number of salesman " << i + 1 <<":" ;
		cin >> number[i];
	}*/
	long int number1, number2, number3;

	cout << "Enter new contact number of salesman 1 :";
	cin >> number1;
	cout << "Enter new contact number of salesman 2 :";
	cin >> number2;
	cout << "Enter new contact number of salesman 3 :";
	cin >> number3;

	c1.setSalesmancontactNumber(number1);
	c2.setSalesmancontactNumber(number2);
	c3.setSalesmancontactNumber(number3);

	c1.displaySalesmanDetails();
	c2.displaySalesmanDetails();
	c3.displaySalesmanDetails();

}
