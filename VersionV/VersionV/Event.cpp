#include "Event.h"
#include <iostream>
#include<cstring>

using namespace std;

Event::Event(int id, const char type[], const char colr[], const char locate[])
{
	EventId = id;
	strcpy_s(eventtype, type);
	strcpy_s(themColour, colr);
	strcpy_s(location , locate);
}
void Event::setEvetDetails(int id, const char type[], const char colr[], const char locate[])
{
	EventId = id;
	strcpy_s(eventtype, type);
	strcpy_s(themColour, colr);
	strcpy_s(location, locate);
}

void Event::displayEventDetails()
{
	cout << endl;
	cout << "Event Type = " << eventtype <<endl;
	cout << "Them Colour = " << themColour << endl;
	cout << "Location = " << location << endl;
}

void Event::setEventLocation(const char locate[])
{
	strcpy_s(location, locate);
}

//const char Event::getEventLocation()
//{
//	return *location;
//}


