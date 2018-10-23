// Samantha Meicher
// 2/20/2018
// lowestscore.cpp

#include <iostream>
#include "Group2prototype.h"
using namespace std;

int main()
{
	int score1;
	int score2;
	int score3;
	int score4;
	int score5;
	int lowest;
	
	cout << "Give a number for the 1st score: ";
	cin >> score1;
	
	cout << "Give a number for the 2nd score: ";
	cin >> score2;
	
	cout << "Give a number for the 3rd score: ";
	cin >> score3;
	
	cout << "Give a number for the 4th score: ";
	cin >> score4;
	
	cout << "Give a number for the 5th score: ";
	cin >> score5;
	
	lowest = score1;
	
	findLowest(score1, score2, score3, score4, score5);
	
	
	return 0;
}

//Find and return the lowest score 
int findLowest(int score1, int score2, int score3, int score4, int score5)
{
	//compars score2 to score 1 to detemine which is smaller. If score 2 is 
    //smaller then it becomes score1 and so on.
	int lowest;

	if (score2 < lowest)	
		lowest = score2;
		
	if (score3 < lowest)
		lowest = score3;
		
	if (score4 < lowest)
		lowest = score4;
		
	if (score5 < lowest)
		lowest = score5;
		
	//shows the lowest test score
	cout << "The lowest test score is: " << lowest << endl;
	
	return lowest;
}


