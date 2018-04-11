
/*********************************************************************
** Program name: Project 4
** Author: Diana Oh
** Date: 5/28/2017
** Description: This program utilizes polymorphism and inheritance to fight creatures in a team. The teams fight each other until members from only one team are left standing.
The winner gets the opportunity to play again, while the losers are taken to the loser stack. The program uses a loser stack to hold the losers and a queue to hold the team
members in the current lineup.

*The program can be run using the makefile.
**********************************************************************/

/*The Queue class is responsible for holding the two team's lineups. It is also responsible for having the head of the lineups play, removing a creature from the line up,
* adding a creature to the line up, and determining whether the lineup is empty.
*/

#ifndef Queue_H
#define Queue_H
#include <iostream>
using namespace std; 
#include "inputValidation.h"
#include "Creature.h"


class Queue 


{

private:

	struct QueueNode
	{

		Creature *creature; 
		QueueNode*next;	
		QueueNode*prev;

		QueueNode(Creature* creature1)
		{
			//this->creature = creature; 
			creature = creature1; 

		}

	
	};

	QueueNode *front;
	QueueNode *back;
	
	//cout the head, tail, the previous, current and next pointers
public: 
	void addBack(Creature* creature); 


	Creature* getFront();
	void moveQueue();
	void removeFront(); 
	Queue();  
	~Queue();  
	bool isEmpty(); 

	
	

};
#endif


