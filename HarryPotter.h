
/*********************************************************************
** Program name: Project 4
** Author: Diana Oh
** Date: 5/28/2017
** Description: This program utilizes polymorphism and inheritance to fight creatures in a team. The teams fight each other until members from only one team are left standing.
The winner gets the opportunity to play again, while the losers are taken to the loser stack. The program uses a loser stack to hold the losers and a queue to hold the team
members in the current lineup.

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

	virtual void restoreStrength() override; 
	//string getName();
	//int getStrengthPoints();


};


#endif 
