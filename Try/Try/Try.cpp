#include <iostream>
#include <string>
#include "song.h"
using namespace std;

int main()
{
	char Genre;
	Song* song[3];

	song[0]->setSongDetails(1, "Dynamite", "BTS", "Rock");
	song[1]->setSongDetails(2, "Chandelier", "Sia", "Classic");
	song[2]->setSongDetails(3, "Hello", "Adele", "Pop");

	for (int i = 0; i < 3; i++)
	{
		cout << "Enter gener catogery :";
		cin >> Genre;

	}

	for (int r = 0; r < 3; r++)
	{
		song[r]->getGenre();
	}
	song[0]->displaySongDetails();
	song[1]->displaySongDetails();
	song[2]->displaySongDetails();


	//delete song1;
	return 0;
}
//#include <iostream>
//#include <cstring>
//#include "song.h"
//using namespace std;
//
//int main()
//{
//	char Genre;
//
//	Song song1, song2, song3;
//
//	song1.setSongDetails(1, "Dynamite", "BTS", "Rock");
//	song2.setSongDetails(2, "Chandelier", "Sia", "Classic");
//	song3.setSongDetails(3, "Hello", "Adele", "Pop");
//
//	for (int i = 0; i < 3; i++)
//	{
//		cout << "Enter gener catogery :";
//		cin >> Genre;
//	}
//
//	song1.getGenre();
//	song2.getGenre();
//	song3.getGenre();
//
//	song1.displaySongDetails();
//	song2.displaySongDetails();
//	song3.displaySongDetails();
//
//	return 0;
//}
