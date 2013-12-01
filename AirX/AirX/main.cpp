/*********************************************
* Project:  AirX
* Version:  v0.5
* Members:  Sean Boczulak, Christian Koback, 
*			Dirk Schmitz
* Purpose:  Create an application that 
*			allows users to navigate 
*			airports with ease.
* Class:	ENSE 274
* Date:		30-11-13
**********************************************/

#include<iostream>		// communicating with the user
#include<fstream>		// if we read in a file
#include<string>		// for the use of strings

#include "Map.h"
#include "Flight.h"
#include "FlightList.h"

using namespace std;


int main()
{
	//Init map and airport
	Map airport("FloorOne.txt", "FloorTwo.txt");
	FlightList flights("Flight.txt"); 
	bool running = true;
	Flight userFlight;
	char choice;
	string flightSelect;
	string airlineFilter;
	string destinationFilter;
	char W, S, F, G, C, X, L, E, P;


	cout << "Welcome to AirX\n";
	cout << "To begin, you must select a flight you wish to take.\n";
	
	while(running)
	{
		cout << "What would you like to do?\n";
		cout << "l - List all Flights\ns - Search for Specific Flights\nv - View Current Flight Information\nm - View Map\na - Alter Map\nq - Quit Application\n";

		cin >> choice;
		switch(choice)
		{
		case 'l': 
			flights.PrintList(); 
			cout << "Would you like to select a flight?(y/n)";
			cin >> choice; 
			if(choice == 'y')
			{
				cout << "Enter the flight number you would like to select: ";
				getline(cin, flightSelect);
				
				if (flights.ValidFlight(flightSelect))
					userFlight = flights.FindFlight(flightSelect);
				else
					cout << "Flight not found...";
			}
			break;
		case 's': 
			cout << "Enter the Airline you would like to use? (Enter \"x\" to view any airlines)\n";
			cin >> airlineFilter;
			cout << "Enter the Destination you would like to reach? (Enter \"x\" to view all destinations)\n";
			cin >> destinationFilter;
			flights.PrintFiltered(destinationFilter, airlineFilter);

			cout << "Would you like to select a flight?(y/n)";
			cin >> choice; 
			if(choice == 'y')
			{
				cout << "Enter the flight number you would like to select: ";
				getline(cin, flightSelect);
				
				if (flights.ValidFlight(flightSelect))
					userFlight = flights.FindFlight(flightSelect);
				else
					cout << "Flight not found...\n";
			}
			break;
		case 'v':
			userFlight.PrintFlightLong();
			break;
		case 'm':
			airport.DisplayBothFloors();
			break;
		case 'a':
			cout << "Would you like to see washrooms(W)? (y/n)";
			cin >> W;
			cout << "Would you like to see stores(S)? (y/n)";
			cin >> S;
			cout << "Would you like to see restaurants(F)? (y/n)";
			cin >> F;
			cout << "Would you like to see gates(G)? (y/n)";
			cin >> G;
			cout << "Would you like to see customs(C)? (y/n)";
			cin >> C;
			cout << "Would you like to see the check-in(X)? (y/n)";
			cin >> X;
			cout << "Would you like to see luggage drop-off(D)? (y/n)";
			cin >> L;
			cout << "Would you like to see entrance/exit(E)? (y/n)";
			cin >> E;
			cout << "Would you like to see luggage pick-up(P)? (y/n)";
			cin >> P;
			airport.AlterMap(W, S, F, G, C, X, L, E, P);
			break;
		case 'q': 
			running = false; 
			break;
		default: 
			cout << "Invalid input, please enter: l, s, v, m, a, or q\n"; 
			break;
		}
		//ask the user for destination and airline
		
		// search for the destination and the airline in the FLIGHT CLASS and return
		//all accessible flight information 
			
		// if no entered destination OR airline, ask the user for flight number 

		// search for the flight number in the FLIGHT CLASS and return
		//all accessible flight information

		// get user's location (GPS or ask for the closest place to the user)
		// show the map for the specific airport from MAP CLASS

		// ask the user for place of interests
	
		// if so, show the map with the additional places of interests from MAP CLASS

	}

	return 0;
}
