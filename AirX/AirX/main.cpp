/*********************************************
* Project:  AirX
* Version:  v0.4
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

	cout << "Welcome to AirX\n";
	
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

	

	
	


	return 0;
}
