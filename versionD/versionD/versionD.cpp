#include "book.h"
#include<iostream>
using namespace std;

int main()
{

	/*Book b1("1122", "Jane Eyer", "Charlotte Bronte");
	Book b2("1313", "Divergent", "Veonica Roth");
	Book b3("1441", "Matilda", "Roald Dahl");

	b1.setBookID(b1.getID());                                         <<<<---------       Static
	b2.setBookID(b1.getID());
	b3.setBookID(b1.getID());

	b1.displayBookDetails();
	b2.displayBookDetails();
	b3.displayBookDetails();*/

	Book* b[3];

	b[0] = new Book("1122", "Jane Eyer", "Charlotte Bronte");
	b[1] = new Book("1122", "Jane Eyer", "Charlotte Bronte");
	b[2] = new Book("1122", "Jane Eyer", "Charlotte Bronte");
	                                                                       //<<<<<<<<<<-------   Dynamic
	b[0]->setBookID(b[0]->getID());
	b[1]->setBookID(b[1]->getID());
	b[2]->setBookID(b[2]->getID());

	b[0]->displayBookDetails();
	b[1]->displayBookDetails();
	b[2]->displayBookDetails();


	for (int i = 0; i < 3; i++)
	{
      delete b[i];                //have to call destructor
	}
	
}