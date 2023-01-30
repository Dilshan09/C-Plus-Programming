#include "Child.h"
#include<iostream>
using namespace std;

int main()
{

	Child c1( 1, "Oliver", "Toddler", 123456);
	Child c2(1, "dfgfdc", "Todghfcgdler",654321);
	Child c3(1, "xdgcf", "fhfgh", 963258);


	c1.setContactNo(c1.getsetContactNo());
	c2.setContactNo(c2.getsetContactNo());
	c3.setContactNo(c3.getsetContactNo());

	c1.displayChildDetails();
	c2.displayChildDetails();
	c3.displayChildDetails();

}

