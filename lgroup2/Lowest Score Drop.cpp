#include <iostream>
#include <iomanip>
#include "Group2prototype.h"
using namespace std;

int main()
{
	int score1;

	getScore(score1);
	cout << score1 << endl;
	
	return 0;
}

void getScore(int & score1)
{
	do
	{
		cout<<"Please Enter the score between the 0-100: ";
		cin >> score1;
	    if (score1 < 0 || score1 >100)
	        cout << "ERROR! You should enter the number between 0 to 100. Please try again." << endl;
	} while (score1 < 0 || score1 >100);
}
