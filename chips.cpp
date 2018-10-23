// Junior JeanSimon
// April, 10 2018
// chips.cpp
// this program help a chips and salsa maker keep track of their sales for five
//   different types of salsa they produce: mild, medium, sweet, hot, and zesty
//   by using an array of strings that holds the five salsa name and an array of 
//   integers that holds the number of jars sold. 
//   the progarm ask the user to enter the number of jars sold for each type.
//   then produce and display a report that shows sales for each salsa type,
//   total sales, and the names of the highest
//   selling and lowest selling products

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	int jars = 5;
	string salsa [5] = {"Mild", "Medium", "Sweet", "Hot", "Zesty"};
	int sales [jars];
	
	//ask the user to enter the number of jars sold for each type
	cout <<"Enter the number of jars sold for each typ of salsa:\n";
	for (int i = 0; i < jars; i++)
	{
		
		int number;
		do
		{
			cout << salsa[i] << " : ";
			cin >> number;
			// validation so that the user can enter a number greater than 0
			if (number < 0)
			    cout << "Error! please input a number greater than 0:";
			    
			
		} while (number < 0);
		sales[i] = number;
		
	}
		// create a report and diplay 
		int high, low, total = 0;
		high = low = sales[0];
		
		cout << "Salsa Sales Report: \n";
		cout << "............................. \n";
		cout << "";
		
		for (int i = 0; i < jars; i++)
		{
			cout << "   " << salsa[i] << "       : " << sales [i] << " jars" << endl;
			total += sales[i];
			
			if (sales [i] > high)
			{
				high = sales[i];

			}
			else if (sales [i] < low)
			{
				low = sales [i];
				
			}
		}
		
		// calculate and display the total sales and highest selling products
		cout << "";
		cout << "Total sales:     " << total << " jars" << endl;
		cout << "Highest selling products: ";
		
		for (int i = 0; i < jars; i++)
		{
			if (sales [i] == high)
			    cout << salsa[i] << " ";
			    
		}
		
		// calculate and display the lowest selling products
		cout << endl;
		cout << "Lowest selling products: ";
		
		for (int i = 0; i < jars; i++)
		{
			if (sales [i] == low)
			    cout << salsa [i] << " ";
		}
		cout << endl;
}
