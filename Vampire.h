
/*********************************************************************
** Program name: Project 4
** Author: Diana Oh
** Date: 5/28/2017
** Description: This program utilizes polymorphism and inheritance to fight creatures in a team. The teams fight each other until members from only one team are left standing.
The winner gets the opportunity to play again, while the losers are taken to the loser stack. The program uses a loser stack to hold the losers and a queue to hold the team
members in the current lineup.

*The program can be run using the makefile.
**********************************************************************/

/*The Vampire class inherits from the creature base class. The vampire class consists of a constructuor that sets its strength, die, and armor values. */




#ifndef VAMPIRE_H
#define VAMPIRE_H
#include <iostream>
using namespace std;
#include <cmath>
#include <string> 

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

