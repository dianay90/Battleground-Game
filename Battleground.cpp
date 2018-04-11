
/*********************************************************************
** Program name: Project 3
** Author: Diana Oh
** Date: 5/14/2017
** Description: This program utilizes polymorphism and inheritance to fight creatures in a battle class. A user is prompted a menu and is able to select two
*creatures to fight. Some creatures have an inherent advantage over others due to their special abilities. The creature whose strength points diminish to zero first loses.
*
*The program can be run using the makefile.
**********************************************************************/
/*
The battle ground class contains the battle and play function which take place throughout
the duration of the game until a creature loses.
*/


#include "Battleground.h"


//***TA DRAKE AND TA IAN APPROVED THE SET UP WHERE MY DAMAGE INFLICTED IS SEPARATE FROM MY DEFENSE ROLL. 

/*The battle function takes two creature pointers as arguments. The first argument is reserved for the attacker and the second argument is reserved
 *for the defender. The attacker die roll values and the defender die roll values are then taken as arguments to the damage received function, which is
 *responsible for discerning how much damage to deduct from the defender's strength. 
*/

void Battleground::battle(Creature* Attacker, Creature* Defender)


{

	//Defender receives damage. Attackers hits first; defender defends 

	Defender->damageReceived(Attacker->attack(), Defender->defend());

}


/*The play function takes two creature pointers as parameters. The creature in the first parameter attacks first. The players then alternate attacking
 * each other summoning the battle function, which handles  the damange incurred by the defender. The play function continues until one of the players loses. 
 * The results of the game are then announced at the end of the game. 
 */

void Battleground::play(Creature* CharacterA, Creature* CharacterB)
{
	int round = 0;
	
	//play(player1, player2);
	while ((CharacterA->alive()) && (CharacterB->alive()) )


	{

		round++;


		cout << "Round: " << round << endl;

		battle(CharacterA, CharacterB);
		
		cout << endl; 

	

		//If both characters are still alive after round 1 

		if ((CharacterA->alive()) && (CharacterB->alive()))
		{
			round++;


			cout << "Round: " << round << endl;

			battle(CharacterB, CharacterA);

			cout << endl;
		}
		

	

	}



	if ((!CharacterA->alive()) || (!CharacterB->alive()))
	{
		//DISPLAY WINNTER
		if (CharacterB->getStrengthPoints() <= 0 && CharacterA->getStrengthPoints() > 0)
		{
			cout << CharacterA->getName() << " is the winner!" << endl;
		}


		if (CharacterA->getStrengthPoints() <= 0 && CharacterB->getStrengthPoints() > 0)
		{
			cout << CharacterB->getName() << " is the winner!" << endl;
		}

		if (CharacterB->getStrengthPoints() <= 0 && CharacterA->getStrengthPoints() <= 0)
		{
			cout << "The game is a draw!" << endl;
		}


	}
}

