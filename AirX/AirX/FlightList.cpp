#include "FlightList.h"

FlightList::FlightList()
{
}

FlightList::FlightList(string FL)
{
	ifstream FlightFile;
	FlightFile.open("Flight.txt");
	long unsigned num;
	string dest;
	string air;
	string info;

	for (int i = 0; i < FLIGHTS; i++)
	{
		FlightFile >> num;
		FlightFile >> dest;
		FlightFile >> air;
		FlightFile >> info;
		List[i] = Flight(num, dest, air, info);
	}
}

void PrintList()const
{
	for (int i = 0; i < FLIGHTS; i++)
	{
		List[i].PrintFlightInfo();
	}
}

void PrintFiltered(string destinationIn, string airlineIn)const
{
	for (int i = 0; i < FLIGHTS; i++)
	{
		if (List[i].MeetsCriteria(destinationIn, airlineIn))
		{
			List[i].PrintFlightInfo();
		}
	}
}