
/*********************************************************************
** Program name: Project 4
** Author: Diana Oh
** Date: 5/28/2017
** Description: This program utilizes polymorphism and inheritance to fight creatures in a team. The teams fight each other until members from only one team are left standing. 
The winner gets the opportunity to play again, while the losers are taken to the loser stack. The program uses a loser stack to hold the losers and a queue to hold the team
members in the current lineup. 

*The program can be run using the makefile.
**********************************************************************/


#include "Vampire.h"

Vampire::Vampire()
{

	this->attackDieSides = 12;
	this->defenseDieSides=6;
	this->armor = 1;
	this->strengthPoints = 18;
	this->maxStrength = 18;
	this->creatureName = "Vampire";
	this->numberOfAttackDie = 1;
	this->numberofDefenseDie = 1;
	this->life = 1;

}




/*TA DRAKE AND TA IAN APPROVED THE SET UP WHERE MY DAMAGE INFLICTED IS SEPARATE FROM MY DEFENSE ROLL.
 *
 *The damage received function calculates the damage inflicted on the defender. The arguments are the attack roll value and the defend roll value, which are used
*along with the creatures armor to discern the damage inflicted. The vampire has a 50% chance of using charm, which prevents it from incurring any damage. 
*/

void Vampire::damageReceived(int attackRoll, int defenseRoll)
{
	int damage = 0;

	int chance = 0;

	chance = rand() % 4;   //0123

	if (chance == 1 || chance ==3)

		{

			damage = attackRoll - defenseRoll - armor;

		//make sure damage isn't negative 

			if (damage<0)
			{
				damage = 0;
			}

			
			cout << getName() << " strength points: " << strengthPoints << "  |  " << "armor: " << armor << endl;

			cout << getName() << " damage inflicted: " << damage << endl;


		}


	if (chance == 2 || chance==0)

	{

		
		cout << getName() << " used CHARM so the creature shielded the attack!" << endl;
		
		cout << getName() << " strength points: " << strengthPoints << "  |  " << "armor: " << armor << endl;
		cout << getName() << " damage inflicted: " << damage << endl;



	}




	if (damage>0)
	{
		strengthPoints = strengthPoints - damage;

	}

	if (strengthPoints <= 0)
	{
		strengthPoints = 0;

		cout << getName() << " is dead." << endl;
		life--;

	}




}


