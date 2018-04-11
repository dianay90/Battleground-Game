
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

#include "Queue.h"


Queue::Queue()

{

	front = NULL; 
	back = NULL;

}



//This function deletes a node from the head of the double linked structure. 

void Queue::removeFront() 

{

	if (front == NULL)

	{
		cout << "There are no items in your list!" << endl; 
		//return; 
	

	}




	// there is one item in queue 
	if (front == back)

	{
		delete front; 

		front = NULL; 
		back = NULL; 
	


	}

	else

	{
		QueueNode *temp=front;
		front = front->next; 
		back->next = front; 
		front->prev = back; 
		delete temp; 


		

	}
	
	
}

void Queue::moveQueue()
{
	
	front = front->next; 
	back = back->next; 

}




// This function adds creatures to the circular double linked structure from the back. The creature is added by passing a creature pointer as the function argument.  
void Queue::addBack(Creature* creature1)
{

	// no items
	if (front == NULL)
	{

		front = new QueueNode(creature1);
		back = front;
		back->prev = front;
		back->next = front;
		front->next = back;
		front->prev = back;

	}


	else
	{


		QueueNode *newNode = new QueueNode(creature1);
		newNode->prev = back;
		back = newNode;
		back->prev->next = back; //It's making the previous pointer of the second node point to the new node
		back->next = front;
		front->prev = back;



	}
	cout << endl; 




}







//Thie function returns a creature pointer of the creature that's in the front of the circular double linked structure. 

Creature* Queue::getFront()
{
	
	
	if (front==NULL)
	{
		return NULL; 
	}
	
	else

	{
		return front->creature;

	}
	
	
}


// This function returns true if the lineup is empty and false otherwise. 

bool Queue::isEmpty()
{
	
	//If there's nothing in the queue 
	if (front == NULL)

	{
		return true;
	}


	//If there's stuff in the queue 

	if (front !=NULL)
	{
		return false;
	}



}






Queue::~Queue()
{


	//one node 
	if (front== NULL)
	{
		 
	}

	if (front != NULL)
	{
		if (front == back)
		{

			delete front->creature; //add
			delete front;
			front = NULL;
			back = NULL;

		}


		else
		{
			QueueNode *nodePtr = front;

			do

			{
				QueueNode *trash = nodePtr;
				nodePtr = nodePtr->next;
				delete trash->creature; //add
				delete trash;


			} while (nodePtr != front);

		}

	}
	
	
}


	