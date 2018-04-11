

/*********************************************************************
** Program name: Project 3
** Author: Diana Oh
** Date: 5/14/2017
** Description: This program utilizes polymorphism and inheritance to fight creatures in a battle class. A user is prompted a menu and is able to select two
*creatures to fight. Some creatures have an inherent advantage over others due to their special abilities. The creature whose strength points diminish to zero first loses.
*
*The program can be run using the makefile.
**********************************************************************/

/*The creature class the base class that contains attack, defend, damage received, and isalive function. The other creatures inherit from this class. The class
also contains a pure virtual destructor, making it an abstract class.*/

#include "Creature.h"

int Creature::getStrengthPoints()
{
	

	return strengthPoints; 

}

Creature::~Creature() { }

//The attack function rolls the creatures attack dice and number of attack die. 


 int Creature::attack()
{
	
	int attack = 0;
	for (int i = 0; i<numberOfAttackDie; i++)
	{
		attack += rand() % attackDieSides + 1;

	}

	cout << getName() << " strength points: " << strengthPoints << "  |  " << "armor: " << armor << endl;
	cout << getName() << " attack die rolled:  " << attack << endl;



	return attack;

}

//The defend function rolls the creatures defend dice and number of defense die. 

int Creature::defend()
{
	
	int defend = 0;
	for (int i = 0; i<numberofDefenseDie; i++)
	{
		defend += rand() % defenseDieSides + 1;

	}
	
	//cout << getName() << " rolled" << defend << " defense points!" << endl;
	//cout << getName() << " strength points:" << strengthPoints << endl;
	//cout << getName() << " armor:" << armor << endl;
	cout << getName() << " strength points: " << strengthPoints << "  |  " << "armor: " << armor << endl;
	cout << getName() << " defense die rolled: " << defend << endl;



	return defend;
}


/*The damage received function calculates the damage inflicted on the defender. The arguments are the attack roll value and the defend roll value, which are used
 *along with the creatures armor to discern the damage inflicted. 
 */
void Creature::damageReceived(int attackRoll, int defenseRoll)
{
	int damage;
	damage = attackRoll - defenseRoll - armor;


	if (damage<0)
	{
		damage = 0;
	}

	cout << getName() << " damage inflicted: " << damage <<  endl;


	if (damage>0)
	{
		strengthPoints = strengthPoints - damage;

	}

	if (strengthPoints <= 0)
	{
		strengthPoints = 0;
		life--;
		cout << getName() << " is dead!" << endl;

	}




}


string Creature::getName()
{
	
	return creatureName;

}

// The set name function takes a number 1 or 2 as an argument. Depending on the number, the creature gets Player 1 or Player 2 in front of its name. 

void Creature::setName(int number)
{
	
	if (number == 1)
	{
		creatureName = "Player 1 " + creatureName;

	}

	if (number ==2)
	{
		creatureName = "Player 2 " + creatureName;

	}
}


int Creature::getArmor()
{
	
	return armor;
}

// The alive function returns a value of false is the creature is dead or true if the creature is alive. 


bool Creature::alive()
{
	if (life <=0)
	{
		return false;
	}


	else
	{
		return true;

	}
}