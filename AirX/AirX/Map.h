#ifndef __MAP_H__
#define __MAP_H__

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const unsigned MAX_COL = 54;
const unsigned MAX_ROW = 15;

class Map
{
private:
	//Array of map
	char floorOne[MAX_ROW][MAX_COL];
	char floorTwo[MAX_ROW][MAX_COL];
	
	//Checks if nodes should be shown
	bool Washrooms(char select);
	bool Store(char select);
	bool Food(char select);
	bool Gate(char select);
	bool Customs(char select);
	bool CheckIn(char select);
	bool Luggage(char select);
	bool Entrance(char select);
	bool PickUp(char select);
public:
	//Default Constructor
	Map();

	//Constructor with file name
	Map(string, string);

	//To display the floors as a "cout <<"
	void DisplayBothFloors()const;
	void DisplayFloorOne()const;
	void DisplayFloorTwo()const;

	//Alters the map to the users specifications
	void AlterMap (char W, char S, char F, char G, char C, char X, char L, char E, char P);
}

#endif