#include "book.h"
#include<iostream>
using namespace std;

Book::Book()
{
	bookID = "";
	bookName = "";
	author = "";
}
Book::Book(string tBookID, string tBookName, string tAuthor)
{
	bookID = tBookID;
	bookName = tBookName;
	author = tAuthor;
}
void Book::setBookDetails(string tBookID, string tBookName, string tAuthor)//class name book so hee also book is simple
{
	bookID = tBookID;
	bookName = tBookName;
	author = tAuthor;
}

void Book::setBookID(string tBookID)
{
	bookID = tBookID;
}

void Book::displayBookDetails()
{
	cout << "bookID = " << bookID << endl;
	cout << "bookName = " << bookName << endl;
	cout << "author = " << author << endl;
	cout << "\n\n";

}
string Book::getID()
{

	string ID;
	cout << "Eneter ID :";
	cin >> ID;

	return ID;
}
Book::~Book() {
	cout << "Destructor runs" << endl;              //we use this for to looking our destructor is work
}