// Junior Jean-Simon
// January 22, 2018
// DistanceTraveled.cpp
// Calculate the distance traveled by geting the speed and hours from the user
   //then use a funtion to return the value to the main 

#include <iostream>
#include <iomanip>
using namespace std;

int DistanceTraveleled(int Hours, int mph);     

int main()

{
	int Speed, // retrive the speed and hours from the user
	Hours;


	// Ask the user to input the speed
	cout << "Enter the speed in mph? ";
	cin >> Speed;

	// Ask the user to input the time
	cout << "How many hours has it traveled? ";
	cin >> Hours;
     
    //display the information
	for(int n = 1; n <= Hours; n++)
	cout << setw(3) << n << setw(5) << DistanceTraveleled(n,Speed) << endl;
	

return 0;
}


//return the value to main
int DistanceTraveleled(int Hours, int mph)  
{
	// calculae the distance
	int Distance = 1;	
	Distance = mph * Hours;
	return Distance;
}

