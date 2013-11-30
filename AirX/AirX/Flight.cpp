#include "Flight.h"

Flight::Flight()
{
	flightNumber = 0000;
	destination = "";
	airline = "";
	connections = "";
	time = "0:00";
	start = "";
}
Flight::Flight(long unsigned flightNumber_in, string destination_in, string airline_in, string connections_in, string Time, string start_in)
{
	flightNumber = flightNumber_in;
	destination = destination_in;
	airline = airline_in;
	connections = connections_in;
	time = Time;
	start = start_in;
}
bool Flight::MeetsCriteria(string destinationIn, string airlineIn)
{
	if(destination == destinationIn)
	{
		if(airlineIn == airline)
		{
			return true;
		}
		else
		{
		return false;
		}
	}
	else
	{
		return false;
	}
}

void Flight::PrintFlightInfo()const
{
	cout<< "The connecting flights are " << connections << endl; 
	cout<<"You leave at :  "<<time <<endl;
	cout<<"You are flying with the airline called:  "<<airline<<endl;
	cout<< "You are going to:  "<< destination<<endl;
	cout<<"You leave from:  "<<start<<endl;
	cout<<"Your flight number is: "<<flightNumber<<endl;
}