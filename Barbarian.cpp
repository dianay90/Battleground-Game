

/*********************************************************************
** Program name: Project 3
** Author: Diana Oh
** Date: 5/14/2017
** Description: This program utilizes polymorphism and inheritance to fight creatures in a battle class. A user is prompted a menu and is able to select two
*creatures to fight. Some creatures have an inherent advantage over others due to their special abilities. The creature whose strength points diminish to zero first loses.
*
*The program can be run using the makefile.
**********************************************************************/

/*The barbarian class inherits from the creature base class. The barbarian class consists of a constructuor that sets its strength, die, and armor values. */

#include "Barbarian.h"

Barbarian::Barbarian()
{
	
	this->attackDieSides = 6;
	this-> defenseDieSides=6; 
	this->armor=0;
	this-> strengthPoints=12;
	this->creatureName= "Barbarian";
	this->numberOfAttackDie = 2;
	this->numberofDefenseDie = 2;
	this->life = 1;

}



/*
void Barbarian::damageReceived(int attackRoll, int defenseRoll )
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
	
	if (strengthPoints <=0)
	{
		strengthPoints = 0;
		life--;

		cout << getName() << " is dead" << endl; 

	}




}

*/