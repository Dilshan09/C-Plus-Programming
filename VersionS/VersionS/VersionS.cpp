#include "Child.h"
#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    
	Child c1(1, "Oliver", "Toddler", "Brayn", 1234567896);
	Child c2(2, "lllll", "ffffff", "gggggg", 1234567896);
	Child c3(3, "kkkkkk", "jjjjj", "hhhhhh", 1234567896);


	c1.setContactNo(c1.getsetContactNo());
	c2.setContactNo(c2.getsetContactNo());
	c3.setContactNo(c3.getsetContactNo());

	c1.displayChildDetails();
	c2.displayChildDetails();
	c3.displayChildDetails();

	return 0;
}

