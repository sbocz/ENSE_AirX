#ifndef __FLIGHTLIST_H__
#define __FLIGHTLIST_H__

#include "Flight.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const int FLIGHTS = 20;

class FlightList
{
	Flight List[FLIGHTS];

public:
	//constructors
	FlightList();
	FlightList(string FL);

	//print all of the flights available
	void PrintList()const;	

	//Print the flights with requested destinations and airlines
	void PrintFiltered(string, string)const;

	//Finds what flight the user selects
	Flight FindFlight(string flightNum)const;

	//Checks if a flight number is in the list
	bool ValidFlight(string num)const;
};

#endif