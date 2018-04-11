
/*********************************************************************
** Program name: Project 3
** Author: Diana Oh
** Date: 5/14/2017
** Description: This program utilizes polymorphism and inheritance to fight creatures in a battle class. A user is prompted a menu and is able to select two
*creatures to fight. Some creatures have an inherent advantage over others due to their special abilities. The creature whose strength points diminish to zero first loses.
*
*The program can be run using the makefile.
**********************************************************************/
/* Menu Class displays menu, allows user to add menu options, and assesses the input entered by the user 
 * with assistance from the inputValidation function. 
*/

#ifndef MENU_H
#define MENU_H
#include <string>
#include <vector>
#include "inputValidation.h"
#include <iostream>
using namespace std;
#include <cmath>
#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Creature.h"
#include "Barbarian.h"
#include "Medusa.h"
#include "HarryPotter.h"
#include "Vampire.h"
#include "BlueMen.h"
#include "Battleground.h"



using namespace std;

class Menu
{

private:

	vector<string>m;
	int number; 

public:

	Menu(int param);
	void addMember(string title);
	void displayMenu();
	void setNumberofOptions(int param);
	int verifyAndReturn();
	void battleMenu();
	void battleInnerMenu();
};


#endif
