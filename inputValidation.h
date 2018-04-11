
/*********************************************************************
** Program name: Project 4
** Author: Diana Oh
** Date: 5/28/2017
** Description: This program utilizes polymorphism and inheritance to fight creatures in a team. The teams fight each other until members from only one team are left standing.
The winner gets the opportunity to play again, while the losers are taken to the loser stack. The program uses a loser stack to hold the losers and a queue to hold the team
members in the current lineup.

*The program can be run using the makefile.
**********************************************************************/

/* Input validation function validates user input to ensure it's an integer. It take in arguments integer min and 
integer max to ensure the input the user enters is within that range and returns an int. 
*/



#ifndef INPUTVALIDATION_H
#define INPUTVALIDATION_H
#include <iostream>
using namespace std;
#include <string>

	int integerInputValidation(int min, int max);
	string stringInputValidation();
	int negativeIntegerInputValidation(int min, int max);

#endif



