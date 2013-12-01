#include "Map.h"

//Checks if nodes should be shown
bool Map::Washrooms(char select)const
{
	if (select == 'y')
		return true;
	return false;
}

//Checks if nodes should be shown
bool Map::Store(char select)const
{
	if (select == 'y')
		return true;
	return false;
}

//Checks if nodes should be shown
bool Map::Food(char select)const
{
	if (select == 'y')
		return true;
	return false;
}

//Checks if nodes should be shown
bool Map::Gate(char select)const
{
	if (select == 'y')
		return true;
	return false;
}

//Checks if nodes should be shown
bool Map::Customs(char select)const
{
	if (select == 'y')
		return true;
	return false;
}

//Checks if nodes should be shown
bool Map::CheckIn(char select)const
{
	if (select == 'y')
		return true;
	return false;
}

//Checks if nodes should be shown
bool Map::Luggage(char select)const
{
	if (select == 'y')
		return true;
	return false;
}

//Checks if nodes should be shown
bool Map::Entrance(char select)const
{
	if (select == 'y')
		return true;
	return false;
}

//Checks if nodes should be shown
bool Map::PickUp(char select)const
{
	if (select == 'y')
		return true;
	return false;
}

//Default Constructor
Map::Map()
{
}

//Constructor with file name
Map::Map(string F1, string F2)
{
	ifstream floorFile1;
	ifstream floorFile2;

	floorFile1.open(F1);
	floorFile2.open(F2);

	if(floorFile1 && floorFile2)
	{
		for(unsigned i = 0; i < MAX_ROW; i++)
		{
			for(unsigned j = 0; j < MAX_COL; j++)
			{
				floorOne[i][j] = floorFile1.get();
				floorTwo[i][j] = floorFile2.get();
			}
		}
	}

	floorFile1.close();
	floorFile2.close();
}

//To display the floors as a "cout <<"
void Map::DisplayBothFloors()const
{
	DisplayFloorOne();
	DisplayFloorTwo();
}

void Map::DisplayFloorOne()const
{
	for(unsigned i = 0; i < MAX_ROW; i++)
	{
		for(unsigned j = 0; j < MAX_COL; j++)
		{
			cout << floorOne[i][j];
		}
		cout << endl;
	}
	cout << endl;
}

void Map::DisplayFloorTwo()const
{
	for(unsigned i = 0; i < MAX_ROW; i++)
	{
		for(unsigned j = 0; j < MAX_COL; j++)
		{
			cout << floorTwo[i][j];
		}
		cout << endl;
	}
	cout << endl;
}

//Alters the map to the users specifications
void Map::AlterMap (char W, char S, char F, char G, char C, char X, char L, char E, char P)
{
	if (Washrooms(W))
	{
		floorOne[3][3] = 'W'; floorOne[2][11] = 'W'; floorOne[13][45] = 'W'; floorOne[13][51] = 'W';
		floorTwo[13][4] = 'W'; floorTwo[13][12] = 'W'; floorTwo[2][50] = 'W'; floorTwo[5][50] = 'W';
	} else
	{
		floorOne[3][3] = ' '; floorOne[2][11] = ' '; floorOne[13][45] = ' '; floorOne[13][51] = ' ';
		floorTwo[13][4] = ' '; floorTwo[13][12] = ' '; floorTwo[2][50] = ' '; floorTwo[5][50] = ' ';
	}

	if (Store(S))
	{
		floorOne[11][4] = 'S';
		floorTwo[8][3] = 'S';
	} else
	{
		floorOne[11][4] = ' ';
		floorTwo[8][3] = ' ';
	}

	if (Food(F))
	{
		floorTwo[2][4] = 'F'; floorTwo[2][12] = 'F';
	} else
	{
		floorTwo[2][4] = ' '; floorTwo[2][12] = ' ';
	}

	if (Gate(G))
	{
		floorTwo[1][27] = 'G'; floorTwo[1][40] = 'G';
	} else
	{
		floorTwo[1][27] = ' '; floorTwo[1][40] = ' ';
	}

	if (Customs(C))
	{
		floorTwo[9][31] = 'C';
	} else
	{
		floorTwo[9][31] = ' ';
	}

	if (CheckIn(X))
	{
		floorOne[2][38] = 'X';
	} else
	{
		floorOne[2][38] = ' ';
	}

	if (Luggage(L))
	{
		floorOne[2][38] = 'L';
	} else
	{
		floorOne[2][38] = ' ';
	}

	if (Entrance(E))
	{
		floorOne[10][52] = 'E';
	} else
	{
		floorOne[10][52] = ' ';
	}

	if (PickUp(P))
	{
		floorOne[11][28] = 'P'; floorOne[11][37] = 'P';
	} else
	{
		floorOne[11][28] = ' '; floorTwo[11][37] = ' ';
	}
}