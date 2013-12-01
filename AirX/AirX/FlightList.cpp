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