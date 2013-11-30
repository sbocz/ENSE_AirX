#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;
int main()
{
	//Declare Variables
	string inputDate, day, month, date, year, monthList;	
	int endDay, endMonth, endDate;
	ifstream monthIn;
    ofstream monthOut;
	
	while (inputDate != "exit")
	{
		cout << "Input a big ass in the form: \"Sunday, January 2, 2010\". Enter \"exit\" if you wish to end the program." << endl;

		getline(cin,inputDate);		//Get data for date from user
		
		//End program if user wishes to end
		if (inputDate == "exit")
		{
			return 0;
		}
		
		endDay = inputDate.find(",");
		day = inputDate.substr(0, endDay);		//Extract day of the week
		inputDate = inputDate.substr(endDay + 2);	//remove day from input data
			
		endMonth = inputDate.find(" ");
		month = inputDate.substr(0, endMonth);	//Extract month
		inputDate = inputDate.substr(endMonth + 1);	//remove month from input data
			
		endDate = inputDate.find(",");
		date = inputDate.substr(0, endDate);	//Extract date
		inputDate = inputDate.substr(endDate + 2);	//remove date from input data

		year = inputDate;		//Extract year
		
		cout << month + " " + date + " was a " + day + " in " + year << endl;	//Display in format 1
		cout << day.substr(0, 3) + ", " + month.substr(0, 3) + " " + date + " '" + year.substr(year.length() - 2, 2) << endl;	//Display in format 2
		
		monthIn.open("Months.txt");
		getline(monthIn, monthList); //get list of months with corresponding numbers
		
		cout << year + "-" + monthList.substr(monthList.find(month) - 2, 2) + "-" << setfill('0') << setw(2) << date << endl; //Display format 3

		cout << endl;	//Create blankline in case the user wants to enter a second date
	}
	
	return 0;
}
