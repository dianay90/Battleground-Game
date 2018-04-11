
/*********************************************************************
** Program name: Project 3
** Author: Diana Oh
** Date: 5/14/2017
** Description: This program utilizes polymorphism and inheritance to fight creatures in a battle class. A user is prompted a menu and is able to select two
*creatures to fight. Some creatures have an inherent advantage over others due to their special abilities. The creature whose strength points diminish to zero first loses.
*
*The program can be run using the makefile.
**********************************************************************/

/*The Harry Potter class inherits from the creature base class. The Harry Potter class consists of a constructuor that sets its strength, die, and armor values. */

#include "HarryPotter.h"


HarryPotter::HarryPotter()
{
	
	this->attackDieSides = 6;
	this-> defenseDieSides=6; 
	this->armor=0;
	this-> strengthPoints=10;
	this->creatureName= "Harry Potter";
	this->numberOfAttackDie = 2;
	this->numberofDefenseDie = 2;
	this->life = 2; 

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





