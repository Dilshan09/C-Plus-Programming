#include<iostream>
#include <string>
using namespace std;

class Song
{
private:
	int songID;
	const char songName[20];
	const char artist[20];
	const char genre[20];
public:
	/*Song();
	Song(int psongID, const char psongName[], const char partist[], const char pgenre[]);*/
	void setSongDetails(int psongID, string psongName[], string partist[], string pgenre[]);
	void displaySongDetails();
	char getGenre();
	//~Song();

};

