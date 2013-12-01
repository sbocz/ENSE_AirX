/**************************
* Project: AirX
* Version: 0.3
* Members: Sean Boczulak, Christian Koback, Dirk Schmitz'
* Purpose: Create an application that allows users to navigate airports with ease.
* Class: ENSE 274
* Date:30-11-13
**************************/

#include<iostream>		// communicating with the user
#include<fstream>		// if we read in a file
#include<string>		// for the use of strings

#include "Map.h"
#include "Flight.h"
#include "FlightList.h"

using namespace std;


int main()
{
	Map airport("FloorOne.txt", "FloorTwo.txt");
	FlightList flights("Flight.txt"); 

	cout << "Welcome to AirX\n";
			
	


	return 0;
}
