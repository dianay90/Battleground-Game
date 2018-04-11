
/*********************************************************************
** Program name: Project 3
** Author: Diana Oh
** Date: 5/14/2017
** Description: This program utilizes polymorphism and inheritance to fight creatures in a battle class. A user is prompted a menu and is able to select two
*creatures to fight. Some creatures have an inherent advantage over others due to their special abilities. The creature whose strength points diminish to zero first loses.
*
*The program can be run using the makefile.
**********************************************************************/
/*The barbarian class inherits from the creature base class. The barbarian class consists of a constructuor that sets its strength, die, and armor values. */


#ifndef BARBARIAN_H
#define BARBARIAN_H
#include <iostream>
using namespace std;
#include <cmath>
#include <string> 
#include "Creature.h"

class Barbarian: public Creature

{

	


public:

	Barbarian();
	
	//virtual void damageReceived(int attackRoll, int defenseRoll);

};


#endif 

