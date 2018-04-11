

/*********************************************************************
** Program name: Project 3
** Author: Diana Oh
** Date: 5/14/2017
** Description: This program utilizes polymorphism and inheritance to fight creatures in a battle class. A user is prompted a menu and is able to select two
*creatures to fight. Some creatures have an inherent advantage over others due to their special abilities. The creature whose strength points diminish to zero first loses.
*
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
#include <cctype>

	int integerInputValidation(int min, int max);
	string stringInputValidation();

#endif



