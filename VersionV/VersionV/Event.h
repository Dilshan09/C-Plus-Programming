#pragma once
class Event
{
private:
	int EventId;
	char eventtype[20];
	char themColour[20];
	char location[20];

public:
	//Event();
	Event(int id, const char type[], const char colr[], const char locate[]);
	void setEvetDetails(int id, const char type[], const char colr[], const char locate[]);
	void displayEventDetails();
	void setEventLocation(const char locate[]);
	//const char getEventLocation();

};

