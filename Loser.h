
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
*The Loser class is responsible for holding the losers of the game and displaying the losers on the screen.
*
*/
#ifndef Loser_H
#define Loser_H
#include <iostream>
using namespace std; 
#include "inputValidation.h"
#include "Creature.h"

class Loser 


{

private:

	struct LoserNode
	{

		Creature *creature; 
		LoserNode*next;	
		LoserNode*prev;
		LoserNode(Creature* creature1)
		{
			//this->creature = creature;
			creature = creature1; 

		}

	
	};
		
	LoserNode *top;
	LoserNode *bottom;
	
	//cout the head, tail, the previous, current and next pointers
public: 
	void addLoser(Creature* creature); 

	void displayLoser(); 
	Loser();  
	~Loser();  
	
	

};
#endif


