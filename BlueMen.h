

/*********************************************************************
** Program name: Project 4
** Author: Diana Oh
** Date: 5/28/2017
** Description: This program utilizes polymorphism and inheritance to fight creatures in a team. The teams fight each other until members from only one team are left standing.
The winner gets the opportunity to play again, while the losers are taken to the loser stack. The program uses a loser stack to hold the losers and a queue to hold the team
members in the current lineup.

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
