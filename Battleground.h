
/*********************************************************************
** Program name: Project 3
** Author: Diana Oh
** Date: 5/14/2017
** Description: This program utilizes polymorphism and inheritance to fight creatures in a battle class. A user is prompted a menu and is able to select two
*creatures to fight. Some creatures have an inherent advantage over others due to their special abilities. The creature whose strength points diminish to zero first loses.
*
*The program can be run using the makefile.
**********************************************************************/
/*
The battle ground class contains the battle and play function which take place throughout
the duration of the game until a creature loses.
*/


#ifndef Battleground_H
#define Battleground_H
#include <iostream>
using namespace std;

#include <string> 
#include "Vampire.h"
#include "Creature.h"
#include "Menu.h"
#include "Medusa.h"
#include "HarryPotter.h"
#include "BlueMen.h"



class Battleground

{


public:

	void battle(Creature* Attacker, Creature* Defender);
	void play(Creature* first, Creature* second); 

	//void play(Creature* first, Creature* second, int player1or2);

};


#endif 

