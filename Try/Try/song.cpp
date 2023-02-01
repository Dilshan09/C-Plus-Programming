#include "song.h"
#include <iostream>
#include <string>
using namespace std;

//
//Song::Song()
//{
//	songID = 0;
//	strcpy(songName, "");
//	strcpy(artist, "");
//	strcpy(genre, "");
//}
//Song::Song(int psongID, const  char psongName[], const  char partist[], const  char pgenre[])
//{
//	songID = psongID;
//	strcpy(songName, psongName);
//	strcpy(artist, partist);
//	strcpy(genre, pgenre);
//}

void Song::setSongDetails(int psongID, string psongName[], string partist[], string pgenre[])
{
	songID = psongID;
	strcpy(songName  , psongName);
	strcpy(artist , partist);
	strcpy(genre , pgenre);

}

void Song::displaySongDetails()
{
	cout << "------------------------------------" << endl;
	cout << "songID = " << songID << endl;
	cout << "songName = " << songName << endl;
	cout << "artist = " << artist << endl;
	cout << "genre = " << genre << endl;
	cout << "------------------------------------" << endl;
}

char Song::getGenre()
{
	return*genre;

}
//Song::~Song()
//{
//	cout << "" << endl;
//}