
/*********************************************************************
** Program name: Project 4
** Author: Diana Oh
** Date: 5/28/2017
** Description: This program utilizes polymorphism and inheritance to fight creatures in a team. The teams fight each other until members from only one team are left standing.
The winner gets the opportunity to play again, while the losers are taken to the loser stack. The program uses a loser stack to hold the losers and a queue to hold the team
members in the current lineup.

*The program can be run using the makefile.
**********************************************************************/


/*The Harry Potter class inherits from the creature base class. The Harry Potter class consists of a constructuor that sets its strength, die, and armor values. */

#include "HarryPotter.h"


HarryPotter::HarryPotter()
{
	
	this->attackDieSides = 6;
	this-> defenseDieSides=6; 
	this->maxStrength = 10;
	this->armor=0;
	this-> strengthPoints=10;
	this->creatureName= "Harry Potter";
	this->numberOfAttackDie = 2;
	this->numberofDefenseDie = 2;
	this->life = 2; 

}

void HarryPotter::restoreStrength()
{

	int damage1 = 0;

	if (life<=1)
	{
		
		damage1 = maxStrength - strengthPoints;
		strengthPoints = strengthPoints + (.5 * damage1);

	}


	else //life is 2 
	{
		

		damage1 = 20 - strengthPoints;
		strengthPoints = strengthPoints + (.5 * damage1);

	}
	


}


// The damage receive function gives Harry a second life after he loses his first one. In his second life, his strength gets set to 20. 

void HarryPotter::damageReceived(int attackRoll, int defenseRoll )
//the attacker would damage you, and then you would get damage from your desfense
{
	
	int damage; 
	damage = attackRoll - defenseRoll - armor;

	if (damage<0)
	{
		damage = 0;
	}

	cout << getName() << " damage inflicted: " << damage << endl;


	if (damage>0)
	{
		strengthPoints = strengthPoints - damage;

	}
	
	if (life == 2)

	{
		if (strengthPoints <= 0)
		{


			cout << getName() << " lost one of his lives. He is now on his second life!" << endl;
			strengthPoints = 20;
			cout << getName() << " strength points:" << strengthPoints << endl;
			cout << getName() << " armor:" << armor << endl;
		
			life--;

		}
	

	}

	if (life==1 &&strengthPoints<=0)
	{

			cout << getName() << " is dead!" << endl;
			life--; 

	}


}





