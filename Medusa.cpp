
/*********************************************************************
** Program name: Project 3
** Author: Diana Oh
** Date: 5/14/2017
** Description: This program utilizes polymorphism and inheritance to fight creatures in a battle class. A user is prompted a menu and is able to select two
*creatures to fight. Some creatures have an inherent advantage over others due to their special abilities. The creature whose strength points diminish to zero first loses.
*
*The program can be run using the makefile.
**********************************************************************/
/*The Medusa class inherits from the creature base class. The Medusa class consists of a constructor that sets its strength, die, and armor values and an
attack function the contains the glare power, which gets executed each time Medua rolls 12.*/

#include "Medusa.h"

Medusa::Medusa()
{

	this->attackDieSides = 6;
	this->defenseDieSides=6;
	this->armor = 3;
	this->strengthPoints = 8;
	this->creatureName = "Medusa";
	this->numberOfAttackDie = 2;
	this->numberofDefenseDie = 1;
	this->life = 1;

}


/*The attack function overrides the attack function in the base class. When 12 is rolled, the attack gets set to 2000.*/
int Medusa::attack()
{


	int attack = 0;
	for (int i = 0; i<numberOfAttackDie; i++)
	{
		attack += rand() % attackDieSides + 1;

	}



	if (attack==12)
	{
		
		attack = 2000;

		cout << getName() << " strength points: " << strengthPoints << "  | " << "armor: " << armor << endl;
		cout << "Medusa used GLARE!!!" << endl; 
		cout << getName() << "attack die rolled: 12  " << " GLARE summoned " << attack << " attack points!" << endl;

	}
	
	
	else {


		cout << getName() << " strength points: " << strengthPoints << "  | " << "armor: " << armor << endl;
		cout << getName() << " attack die rolled:  " << attack << endl;

	}

	return attack;

}





/*
void Medusa::damageReceived(int attackRoll, int defenseRoll)
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

		cout << getName() << " is dead!" << endl;
		life--; 

	}




}


*/
