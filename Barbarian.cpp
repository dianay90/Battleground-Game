

/*********************************************************************
** Program name: Project 4
** Author: Diana Oh
** Date: 5/28/2017
** Description: This program utilizes polymorphism and inheritance to fight creatures in a team. The teams fight each other until members from only one team are left standing.
The winner gets the opportunity to play again, while the losers are taken to the loser stack. The program uses a loser stack to hold the losers and a queue to hold the team
members in the current lineup.

*The program can be run using the makefile.
**********************************************************************/

/*The barbarian class inherits from the creature base class. The barbarian class consists of a constructuor that sets its strength, die, and armor values. */

#include "Barbarian.h"

Barbarian::Barbarian()
{
	
	this->attackDieSides = 6;
	this-> defenseDieSides=6; 
	this->armor=0;
	this-> strengthPoints=12;
	this->maxStrength = 12;
	this->creatureName= "Barbarian";
	this->numberOfAttackDie = 2;
	this->numberofDefenseDie = 2;
	this->life = 1;

}



