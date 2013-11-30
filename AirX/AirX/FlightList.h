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

	FlightList();
	FlightList(string FL);

	void PrintList()const;
	void PrintFiltered()const;
};

#endif