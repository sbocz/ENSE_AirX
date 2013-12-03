#include <cassert>
#include<iostream>		// communicating with the user
#include<fstream>		// if we read in a file
#include<string>		// for the use of strings

#include "Map.h"
#include "Flight.h"
#include "FlightList.h"
#include "../UnitTest++.h"
#include "../TestReporterStdout.h"

char choice= 'l';
Map airport("FloorOne.txt", "FloorTwo.txt");
FlightList flights("Flight.txt");
bool running = true;
Flight userFlight;
char choice;
string flightSelect;
string airlineFilter;
string destinationFilter;

TEST(choice)
{
	while (choice != 'z')
	{
	if(choice ='l')
		{		//list all flights
			flights.PrintList(); 
			cout << "testing..."<<endl;
			cin >> choice; 
			choice = 'y';
			if(choice == 'y')
			{

				cout << "Enter the flight number you would like to select: ";
				flightSelect = "7423";
				
				if (flights.ValidFlight(flightSelect))
				{
					userFlight = flights.FindFlight(flightSelect);
					CHECK_EQUAL(userFlight.flightConn(flightSelect),"Winnipeg " ;
				}
				else
				{
					cout << "Flight not found...\n";
				}
			}
			choice = 's';		// continues onto the next test
		}
	else if( choice =='s')
		{		//search for certain flights
			string airlineFilter = "Westjet";
			string destinationFilter = "Regina";
			flights.PrintFiltered(destinationFilter, airlineFilter);
			
			choice = 'y';
			if(choice == 'y')
			{
				flightSelect = "5747";
				getline(cin, flightSelect);
				if (flights.ValidFlight(flightSelect))
				{
					userFlight = flights.FindFlight(flightSelect);
					CHECK_EQUAL(userFlight.flightConn(flightSelect),"None" ;
				}
				else
				{
					cout << "Flight not found...\n";
				}
			}
			choice = 'z';
		}	
	else
		{//bad input
			assert( 'l' == 'r');
		
		}

	}

	cout<<"end of test. "<<endl;
}
int main(int, char const *[])
{
    return UnitTest::RunAllTests();
}
