
#include<iostream>
using namespace std;

class Book
{
private:
    string bookID;
    string bookName;
    string author;

public:
    Book();
    Book(string tBookID, string tBookName, string tAuthor);
    void setBookDetails(string tBookID, string tBookName, string tAuthor);
    void setBookID(string tBookID);
    void displayBookDetails();
    string getID();
    ~ Book();     //if we not use destructor remove this line
};
