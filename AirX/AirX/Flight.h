#ifndef __FLIGHT_H__
#define __FLIGHT_H__

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Flight
{
	string connections;
	string time;
	string airline;
	string destination;
	string start;
	long unsigned flightNumber;

public:

	Flight();

	Flight(long unsigned flightNumber, string destination, string airline, string specificInfo);

	// search for the destination and the airline in the FLIGHT CLASS and return
	// true if flight meets criteria 
	bool MeetsCriteria(string destinationIn, string airlineIn);

	// print flight
	void PrintFlightInfo()const;

#endif