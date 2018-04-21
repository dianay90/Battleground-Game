
/*********************************************************************
** Program name: Project 4
** Author: Diana Oh
** Date: 5/28/2017
** Description: This program utilizes polymorphism and inheritance to fight creatures in a team. The teams fight each other until members from only one team are left standing.
The winner gets the opportunity to play again, while the losers are taken to the loser stack. The program uses a loser stack to hold the losers and a queue to hold the team
members in the current lineup.

*The program can be run using the makefile.
**********************************************************************/

/*
The battleground class contains the battle and play function which takes place throughout
the duration of the game until a creature loses.
*/


#ifndef Battleground_H
#define Battleground_H
#include <iostream>
using namespace std;

#include <string> 
#include "Vampire.h"
#include "Creature.h"
#include "Medusa.h"
#include "HarryPotter.h"
#include "Barbarian.h"
#include "BlueMen.h"
#include "Loser.h"
#include "Queue.h"


class Battleground

{

private: 
	int teamAScore; 
	int teamBScore; 

	Loser* lose;

	
	Queue* teamA;
	//Queue teamB;
	Queue* teamB;

public:
	Battleground();
	void battle(Creature* Attacker, Creature* Defender);
	void play(Creature* first, Creature* second); 
	void finalWinner(int A, int B);
	void teamPlay(); 
	void menu();
	void outerMenu();

	
};


#endif 

