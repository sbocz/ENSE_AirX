#include "FlightList.h"

FlightList::FlightList()
{
}

FlightList::FlightList(string FL)
{
	ifstream FlightFile;
	FlightFile.open(FL);
	string num;
	string dest;
	string air;
	string info;
	string connections;
	string time;
	string start;

	for (int i = 0; i < FLIGHTS; i++)
	{
		FlightFile >> num;
		FlightFile >> dest;
		FlightFile >> air;
		FlightFile >> connections;
		FlightFile >> time;
		FlightFile >> start;
		Flight temp(num, dest, air, connections, time, start);
		List[i] = temp;
	}
}

void FlightList::PrintList()const
{
	cout << "Flight     Airline    Destination     Start    Departure   Connections" << endl;
	for (int i = 0; i < FLIGHTS; i++)
	{
		List[i].PrintFlightShort();
	}
}

void FlightList::PrintFiltered(string destinationIn, string airlineIn)const
{
	cout << "Flight     Airline    Destination     Start    Departure   Connections" << endl;
	for (int i = 0; i < FLIGHTS; i++)
	{
		if (List[i].MeetsCriteria(destinationIn, airlineIn))
		{
			List[i].PrintFlightShort();
		}
	}
}

Flight FlightList::FindFlight(string flightNum)const
{
	for (int i = 0; i < FLIGHTS; i++)
	{
		if (List[i].Selected(flightNum))
			return List[i];
	}
	// this needs to return a dummy Flight just incase the one in the if statement is never found.
}

bool FlightList::ValidFlight(string num)const
{	
	for (int i = 0; i < FLIGHTS; i++)
	{
		if (List[i].Selected(num))
			return true;
	}
	return false;
}