
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


#include "Loser.h"


Loser::Loser()

{
	
	top  = NULL; 
	bottom = NULL;

}





//This function accepts a creature pointer as an argument and adds a creature to the loser stack. 
void Loser::addLoser(Creature* creature1)
{

	// no items
	if (top == NULL)
	{

		top = new LoserNode(creature1);
		bottom = top;
		top->prev = NULL; 
		top->next = NULL; 
		bottom->prev = NULL; 
		bottom->next = NULL; 
	}


	else
	{


		LoserNode *newNode = new LoserNode(creature1); 
		top->next = newNode; 
		newNode->prev = top;
		newNode->next = NULL;
		top = newNode;	



	}
	cout << endl;

	//cout << "displaying queue contents... " << endl;
	//displayLoser();


}







//This function displays the losers from the loser stack. 
	void Loser::displayLoser()
	{
		

		if (top==NULL)
		{
			
			cout << "There are no items in your list!" << endl; 
		}


		else
		{


			cout << "Losers:" << endl;

			LoserNode *temp = top;

			do
			{


				cout << temp->creature->getName() << " ";

				temp = temp->prev;
			} while (temp != NULL);

			cout << endl; 

		}

	}




Loser::~Loser()
{
	//one node 
	if (top== NULL)
	{
		 
	}

	if (top != NULL)
	{
		if (top == bottom)
		{
			delete top->creature;  //added
			delete top;
			top = NULL;
			bottom = NULL;

		}


		else
		{
			LoserNode *nodePtr = top;


			while (nodePtr != NULL)
			{
				LoserNode *trash = nodePtr;
				nodePtr = nodePtr->prev;
				delete trash->creature;  //added
				delete trash;

			}





		}
	}
	
}


