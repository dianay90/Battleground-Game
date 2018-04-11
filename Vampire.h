
/*********************************************************************
** Program name: Project 3
** Author: Diana Oh
** Date: 5/14/2017
** Description: This program utilizes polymorphism and inheritance to fight creatures in a battle class. A user is prompted a menu and is able to select two
*creatures to fight. Some creatures have an inherent advantage over others due to their special abilities. The creature whose strength points diminish to zero first loses.
*
*The program can be run using the makefile.
**********************************************************************/
/*The Vampire class inherits from the creature base class. The vampire class consists of a constructuor that sets its strength, die, and armor values. */




#ifndef VAMPIRE_H
#define VAMPIRE_H
using namespace std;
#include <cmath>
#include <string> 
#include <iostream>
#include "Creature.h"

class Vampire : public Creature

{




public:

	Vampire();

	//***TA DRAKE AND TA IAN APPROVED THE SET UP WHERE MY DAMAGE RECEIVED IS SEPARATE FROM MY DEFENSE ROLL. 

	virtual void damageReceived(int attackRoll, int defenseRoll) override;
	
	//***TA DRAKE AND TA IAN APPROVED THE SET UP WHERE MY DAMAGE RECEIVED IS SEPARATE FROM MY DEFENSE ROLL. 

};


#endif 

