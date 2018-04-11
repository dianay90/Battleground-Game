
/*********************************************************************
** Program name: Project 3
** Author: Diana Oh
** Date: 5/14/2017
** Description: This program utilizes polymorphism and inheritance to fight creatures in a battle class. A user is prompted a menu and is able to select two 
*creatures to fight. Some creatures have an inherent advantage over others due to their special abilities. The creature whose strength points diminish to zero first loses. 
*
*The program can be run using the makefile.
**********************************************************************/

/* This is my test driver function that allows two creatures to be selected to combat one another. *****This test driver design was approved by TA Ian.****** */

#include <iostream>
#include "Creature.h"
#include "Barbarian.h"
#include "Medusa.h"
#include "HarryPotter.h"
#include "Vampire.h"
#include "BlueMen.h"
#include "Menu.h"
#include "Battleground.h"
#include <cstdlib>
#include <ctime>

int main ()


{

	unsigned seed;
	srand(time(NULL));


		

	Menu m(4);

	m.battleMenu(); 

	


	return 0; 
}