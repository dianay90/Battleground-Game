
/*********************************************************************
** Program name: Project 3
** Author: Diana Oh
** Date: 5/14/2017
** Description: This program utilizes polymorphism and inheritance to fight creatures in a battle class. A user is prompted a menu and is able to select two
*creatures to fight. Some creatures have an inherent advantage over others due to their special abilities. The creature whose strength points diminish to zero first loses.
*
*The program can be run using the makefile.
**********************************************************************/

/*The Blue Men class inherits from the creature base class. The barbarian class consists of a constructuor that sets its strength, die, and armor values. */

#include "BlueMen.h"

BlueMen::BlueMen()
{

	this->attackDieSides = 10;
	this->defenseDieSides=6;
	this->armor = 3;
	this->strengthPoints = 12;
	this->creatureName = "Blue Men";
	this->numberOfAttackDie = 2;
	this->numberofDefenseDie = 3;
	this->life = 1;

}

//The Blue men defend function loses a die for every four strength points lost. It outputs the defense die rolled and the creatures armor. 

int BlueMen::defend()
{
	int defend = 0;

	


	//1,2,3,4,   5,6,7,8   ,9,10,11,12

	if (strengthPoints >= 9)


	{

		for (int i = 0; i < numberofDefenseDie; i++)

		{
			defend += rand() % defenseDieSides + 1;

		}



	}

	//die is now 2

	if (strengthPoints >= 5 && strengthPoints <= 8)
	{
		for (int i = 0; i < numberofDefenseDie-1; i++)
		{
			defend += rand() % defenseDieSides + 1;

		}
		

	}



	if (strengthPoints <5)

	{

		for (int i = 0; i < numberofDefenseDie-2; i++)


		{
			defend += rand() % defenseDieSides + 1;

			 
		}



	}


	cout << getName() << " defense die rolled: " << defend << endl;
	
	cout << getName() << " strength points: " << strengthPoints << "   " << "armor: " << armor << endl;


	return defend;

}

/*

void BlueMen::damageReceived(int attackRoll, int defenseRoll)
//the attacker would damage you, and then you would get damage from your desfense
{
	int damage;
	damage = attackRoll - defenseRoll - armor;


	if (damage<0)
	{
		damage = 0;
	}

	cout << getName() << " took" << damage << "rolls of damage." << endl;


	if (damage>0)
	{
		strengthPoints = strengthPoints - damage;

	}

	if (strengthPoints <= 0)
	{
		strengthPoints = 0;
		life--;
		cout << getName() << "is dead!" << endl;

	}




}

*/
