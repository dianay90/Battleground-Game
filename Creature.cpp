
/*********************************************************************
** Program name: Project 4
** Author: Diana Oh
** Date: 5/28/2017
** Description: This program utilizes polymorphism and inheritance to fight creatures in a team. The teams fight each other until members from only one team are left standing.
The winner gets the opportunity to play again, while the losers are taken to the loser stack. The program uses a loser stack to hold the losers and a queue to hold the team
members in the current lineup.

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
	damage=0;

	//this is the defender's damage
	damage = attackRoll - defenseRoll - armor;


	if (damage<0)
	{
		damage = 0;
	}

	cout << getName() << " damage inflicted: " << damage <<  endl;


	if (damage>0)
	{

		// the new strengthpoints
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



void Creature::setName(string nickname, int num)
{
	if (num==1)

	{
	
		creatureName = "Team A " + creatureName + " " + nickname ;
	
	}

	if (num==2)
		
	{
		creatureName = "Team B " + creatureName + " " + nickname ;
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


void Creature::restoreStrength()
{
	//strengthPoints = strengthPoints + (.70 * damage);
	int damage1 = 0;
	
	damage1 = maxStrength - strengthPoints; 
	strengthPoints = strengthPoints + (.5 * damage1);
}
