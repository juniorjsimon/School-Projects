//Junior Jean-Simon
//02/22/2018
//getScoreMain.cpp
//This program calculate the average of four numbers, where the user asked
//  to enter 5 score and the lowest one will drop and use functions in order
//  to pass the values
#include <iostream>
#include <iomanip>
#include "Group2prototype.h"
using namespace std;

int main()
{
	int score, score1, score2, score3, score4, score5;

	// Display program introduction
	cout << "This program calculates the average of four numbers"
	          <<" out of five and drop the lowest score.\n";
	

	// Call getScore function for each score
	getScore(score1);
	getScore(score2);
	getScore(score3);
	getScore(score4);
	getScore(score5);

	// Call calcAverage function to pass the five scores
	calcAverage(score1, score2, score3, score4, score5); 
	
	
	return 0;
}

// Bowei Ma
void getScore(int & score)
{
	do
	{
		cout<<"Please Enter the score between the 0-100: ";
		cin >> score;
	    if (score < 0 || score >100)
	        cout << "ERROR! invalid number. Please try again." << endl;
	} while (score < 0 || score >100);
}

//this fuction is passed 5 scores and calls the function FindLowest
// then it calcultes the average of the 4 highest scores
// Casey LeMier
void calcAverage(int score1, int score2, int score3, int score4, int score5)
{
	double average;
    int lowest;
    
	// call findLowest function
    lowest = findLowest(score1, score2, score3, score4, score5);
	
	//calculate the average of the four highest numbers
	if (lowest == score1)
	         average = (score2 + score3 + score4 + score5)/4.0;
	else if (lowest == score2)
	         average = (score1 + score3 + score4 + score5)/4.0;
	else if (lowest == score3)
	         average = (score1 + score2 + score4 + score5)/4.0;
	else if (lowest == score4)
	         average = (score1 + score2 + score3 + score5)/4.0;
	else
	         average = (score1 + score2 + score3 + score4)/4.0;
	
	//display the average of the four highest scores
	cout << "The average of the four highest scores is: " << average << endl;
	
}

//Find and return the lowest score 
// Samantha Meicher
int findLowest(int score1, int score2, int score3, int score4, int score5)
{
	
	//compares score2 to score 1 to detemine which is smaller. If score 2 is 
    //smaller then it becomes lowest and so on.
    int lowest;
    
    
	if (score1 < score2 && score1 < score3 && score1 < score4 && score1 < score5)
		lowest = score1;	
	      			
	else if (score2 < score1 && score2 < score3 && score2 < score4 && score2 < score5)	
	      lowest = score2;	
				
	else if (score3 < score2 && score3 < score1 && score3 < score4 && score3 < score5)	
	     lowest = score3;	
			
	else if (score4 < score2 && score4 < score3 && score4 < score1 && score4 < score5)	
	      lowest = score4;
		
	else 
	      lowest = score5;
		  
	return lowest;	
	
}
