
/*********************************************************************
** Program name: Project 3
** Author: Diana Oh
** Date: 5/14/2017
** Description: This program utilizes polymorphism and inheritance to fight creatures in a battle class. A user is prompted a menu and is able to select two
*creatures to fight. Some creatures have an inherent advantage over others due to their special abilities. The creature whose strength points diminish to zero first loses.
*
*The program can be run using the makefile.
**********************************************************************/
/*The Medusa class inherits from the creature base class. The Medusa class consists of a constructor that sets its strength, die, and armor values and an 
attack function the contains the glare power, which gets executed each time Medua rolls 12.*/


#ifndef MEDUSA_H
#define MEDUSA_H
#include <iostream>
using namespace std;
#include <cmath>
#include <string> 
#include "Creature.h"


class Medusa : public Creature

{


public:

	Medusa();
	virtual int attack() override;
	//virtual int defend();
	//virtual void damageReceived(int attackRoll, int defenseRoll);
	//string getName();
	//int getStrengthPoints();

};


#endif 
