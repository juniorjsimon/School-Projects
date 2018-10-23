#include <iostream>
#include "Group2prototype.h"
using namespace std;
void Get(double &a, double &b);
int main()
{	
	double score1, score2;
	
	//cout validate thge function
	Get(score1, score2);
	cout << score1 << endl;
	
	return 0;
}
void Get(double &a, double &b)
{
	a = Validate("Enter a number: ");
}

double Validate(string prompt)
{
	double num;
	
    do
	{
		cout << prompt;
	    cin >> num;
	    if (num < 0)
	        cout << "ERROR!" << endl;
	} while (num < 0);
	
	return num;
}
