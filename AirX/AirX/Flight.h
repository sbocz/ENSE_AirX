#ifndef __FLIGHT_H__
#define __FLIGHT_H__

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

class Flight
{
	string connections;
	string time;
	string airline;
	string destination;
	string start;
	string flightNumber;

public:

	Flight();

	Flight(string flightNumber_in, string destination_in, string airline_in,string connections_in, string Time, string start_in );

	//Assignment operator
	Flight& operator= (const Flight& original);
	
	// search for the destination and the airline in the FLIGHT CLASS and return
	// true if flight meets criteria 
	bool MeetsCriteria(string destinationIn, string airlineIn)const;

	// print flight
	void PrintFlightLong()const;	//User Flight
	void PrintFlightShort()const;	//List form

	//Checks if a flight number is the same as the requested value
	bool Selected(string)const;
};

#endif