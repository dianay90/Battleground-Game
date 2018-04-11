

/*********************************************************************
** Program name: Project 4
** Author: Diana Oh
** Date: 5/28/2017
** Description: This program utilizes polymorphism and inheritance to fight creatures in a team. The teams fight each other until members from only one team are left standing.
The winner gets the opportunity to play again, while the losers are taken to the loser stack. The program uses a loser stack to hold the losers and a queue to hold the team
members in the current lineup.

*The program can be run using the makefile.
**********************************************************************/


/* This is my test driver function that allows two creatures to be selected to combat one another. *****This test driver design was approved by TA Ian.****** */

#include <iostream>
#include "Creature.h"
#include "Barbarian.h"
#include "Medusa.h"
#include "HarryPotter.h"
#include "Vampire.h"
#include "BlueMen.h"
#include "Queue.h"
#include "Loser.h"
#include "Battleground.h"
#include <cstdlib>
#include <ctime>

int main ()


{
	


	unsigned seed;
	srand(time(NULL));



	Battleground m; 
	m.outerMenu(); 

	


	return 0; 
}