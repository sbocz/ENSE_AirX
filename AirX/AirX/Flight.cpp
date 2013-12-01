#include "Flight.h"

Flight::Flight()
{
	flightNumber = "0000";
	destination = "";
	airline = "";
	connections = "";
	time = "0:00";
	start = "";
}
Flight::Flight(string flightNumber_in, string destination_in, string airline_in, string connections_in, string Time, string start_in)
{
	flightNumber = flightNumber_in;
	destination = destination_in;
	airline = airline_in;
	connections = connections_in;
	time = Time;
	start = start_in;
}

Flight& Flight::operator= (const Flight& original)
{
	flightNumber = original.flightNumber;
	destination = original.destination;
	airline = original.airline;
	connections = original.connections;
	time = original.time;
	start = original.start;
	return *this;
}

bool Flight::MeetsCriteria(string destinationIn, string airlineIn)const
{
	if(destination == destinationIn && airline == airlineIn)
		return true;
	if("x" == destinationIn && airline == airlineIn)
		return true;
	if(destination == destinationIn && "x" == airlineIn)
		return true;
	if("x" == destinationIn && "x" == airlineIn)
		return true;
	return false;
}

void Flight::PrintFlightLong()const
{
	cout << "You are flying with  " << airline << endl;
	cout << "Flight Number: " << flightNumber << endl;
	cout << "Your Destination is: "<< destination << endl;
	cout << "Leaving From: " << start << endl;
	cout << "Flight Departure at: "<< time << endl;
	cout << "The connecting flights are in " << connections << endl; 
}
void Flight::PrintFlightShort()const
{
	cout << setw(6) << flightNumber << setw(12) << airline 
		 << setw(15) << destination << setw(10) << start 
		 << setw(13) << time << setw(14) << connections << endl;
}

bool Flight::Selected(string flightNum)const
{
	if (flightNumber == flightNum)
		return true;
	return false;
}