
/*********************************************************************
** Program name: Project 3
** Author: Diana Oh
** Date: 5/14/2017
** Description: This program utilizes polymorphism and inheritance to fight creatures in a battle class. A user is prompted a menu and is able to select two
*creatures to fight. Some creatures have an inherent advantage over others due to their special abilities. The creature whose strength points diminish to zero first loses.
*
*The program can be run using the makefile.
**********************************************************************/
/*The Harry Potter class inherits from the creature base class. The Harry Potter class consists of a constructor that sets its strength, die, and armor values and 
a damage received function that gives Harry two lives. After he loses one life, his strength points gets set to 20.*/


#ifndef HARRYPOTTER_H
#define HARRYPOTTER_H
#include <iostream>
using namespace std;
#include <cmath>
#include <string> 
#include "Creature.h"


class HarryPotter : public Creature

{


public:

	HarryPotter();
	//virtual int attack();
	//virtual int defend();
	virtual void damageReceived(int attackRoll, int defenseRoll) override;
	//string getName();
	//int getStrengthPoints();


};


#endif 
