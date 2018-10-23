/* Casey LeMier
20 February 2018
calcAverage.cpp
Calculate the average of four highest scores & display
*/

#include <iostream>
#include <iomanip>
#include "Group2prototype.h"
using namespace std;

int main()
{
	int score1, score2, score3, score4, score5; // scores
	int lowest;	// the lowest score
	
	// test variables
	score1 = 8;
	score2 = 4;
	score3 = 5;
	score4 = 2;
	score5 = 3;
	lowest = 2;
	
	calcAverage(score1, score2, score3, score4, score5, lowest);

	return 0;
}

void calcAverage(int score1, int score2, int score3, int score4, int score5, int lowest)
{
	double average;
	
	average = score1 + score2 + score3 + score4 + score5;
	average = average - lowest;
	average = average / 4;
	
	cout << "The average of the four highest scores is: " << average << endl;
	
}
