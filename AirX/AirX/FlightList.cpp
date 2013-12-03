#include "FlightList.h"

FlightList::FlightList()
{
}

FlightList::FlightList(string FL)
{
	ifstream FlightFile;
	FlightFile.open("Flight.txt");
	string num;
	string dest;
	string air;
	string connection, start, time;

	for (int i = 0; i < FLIGHTS; i++)
	{
		FlightFile >> num;
		FlightFile >> dest;
		FlightFile >> air;
		FlightFile >> connection;
		FlightFile >> time;
		FlightFile >> start;
		List[i] = Flight(num, dest, air, connection, time, start);
	}
}

void FlightList::PrintList()const
{
	for (int i = 0; i < FLIGHTS; i++)
	{
		List[i].PrintFlightShort();
	}
}

void FlightList::PrintFiltered(string destinationIn, string airlineIn)const
{
	for (int i = 0; i < FLIGHTS; i++)
	{
		if (List[i].MeetsCriteria(destinationIn, airlineIn))
		{
			List[i].PrintFlightShort();
		}
	}
}