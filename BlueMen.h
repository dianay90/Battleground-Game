
/*********************************************************************
** Program name: Project 3
** Author: Diana Oh
** Date: 5/14/2017
** Description: This program utilizes polymorphism and inheritance to fight creatures in a battle class. A user is prompted a menu and is able to select two
*creatures to fight. Some creatures have an inherent advantage over others due to their special abilities. The creature whose strength points diminish to zero first loses.
*
*The program can be run using the makefile.
**********************************************************************/
/*The Blue Men class inherits from the creature base class. The blue men class consists of a constructor that sets its strength, die, and armor values as well as
a defend function that loses a die for every four strength points lost.*/





#ifndef BLUEMEN_H
#define BLUEMEN_H
#include <iostream>
using namespace std;
#include <cmath>
#include <string> 
#include "Creature.h"


class BlueMen: public Creature

{


public:

	BlueMen();
	//virtual int attack();
	virtual int defend() override;
//	virtual void damageReceived(int attackRoll, int defenseRoll);
	//string getName();
	//int getStrengthPoints();

};


#endif 
