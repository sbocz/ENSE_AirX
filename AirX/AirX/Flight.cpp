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

void Flight::PrintFlightLong()const
{
	cout<< "The connecting flights are " << connections << endl; 
	cout<<"You leave at :  "<<time <<endl;
	cout<<"You are flying with the airline called:  "<<airline<<endl;
	cout<< "You are going to:  "<< destination<<endl;
	cout<<"You leave from:  "<<start<<endl;
	cout<<"Your flight number is: "<<flightNumber<<endl;
}
void Flight::PrintFlightShort()const
{
	cout<<"Connecting flights: "<<connections<<"departure= "<<time<<"Airline is: "<<airline<<"Going to :"<<destination<<"Leaving from= "<<start<<"Flight number= "<<flightNumber<<endl<<endl;
}

bool Flight::Selected(string flightNum)const
{
	if (flightNumber == flightNum)
		return true;
	return false;
}