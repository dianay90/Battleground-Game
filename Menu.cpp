
/*********************************************************************
** Program name: Project 3
** Author: Diana Oh
** Date: 5/14/2017
** Description: This program utilizes polymorphism and inheritance to fight creatures in a battle class. A user is prompted a menu and is able to select two
*creatures to fight. Some creatures have an inherent advantage over others due to their special abilities. The creature whose strength points diminish to zero first loses.
*
*The program can be run using the makefile.
**********************************************************************/
/* Menu Class displays menu, allows user to add menu options, and verifies the input entered by the user
* via the inputValidation function.
*/

#include <iostream>
#include "Menu.h"
#include "inputValidation.h"
using namespace std;
#include <string>

Menu::Menu(int param)
{
	vector<string>m;
	setNumberofOptions(param);


}

//The addMember function adds options to the menu vector when the options are passed as arguments to the function.

void Menu::addMember(string title)

{

	m.push_back(title);
}

//displayMenu function displays the vector's contents
void Menu::displayMenu()
{
	for (int i = 0; i < m.size(); i++)
		cout << m[i] << endl;

}


/*Sets the number of options you want the menu to have. This is done when you pass the number of options you want
as an argument. */
void Menu::setNumberofOptions(int param)
{

	number = param; 
}


/*Verify the user selection from the menu options and make sure the user selected something from the actual menu.
 If they did, the function returns the user input as an integer.*/
int Menu::verifyAndReturn()

{
	//string userInput;
	int userInput2;
	bool flag;

	while (flag == false)

	{
		cout << endl; 
		cout << "Please make a selection from the menu options above." << endl;
		userInput2 = integerInputValidation(0, 3);

		if ((userInput2 > 0) && (userInput2 <= number))
		{
			return userInput2;
		}

		else
		{
			flag = false;
		}

	}
}


/* The battle menu allows a user to start game, play again, or exit the game. If a user opts to play or start the game, they get taken to the inner 
 * menu, which allows users to pick two creatures to fight. 
 */
void Menu::battleMenu()
{

	bool mainFlag = false;
	int firstChoice = 0;



	/*bool flag = false; 
	bool mainFlag = false; 
	int firstChoice=0, choice1 = 0, choice2 = 0, randNumber=0; 

	Battleground b;
	Creature* player1;
	Creature* player2;*/


	addMember("Welcome to Battleground! Please select an option below.");
	addMember("1. Start game");
	addMember("2. Play Again");
	addMember("3. Exit the game"); 

	while (mainFlag == false)

	{

		displayMenu();


		firstChoice = integerInputValidation(1, 3);

	
		if (firstChoice == 1 || firstChoice == 2)
			{


				battleInnerMenu(); 

			}

		

		if (firstChoice == 3)
		{
			mainFlag = true;
			cout << "You have exited." << endl;

		}


	}


}

/* The battle inner menu allows users to pick two creatures to fight. One player is randomly selected to attack first. The play function from the battleground 
 * class is summoned and the game continues until one creature loses. 
*/

void Menu::battleInnerMenu()
{

	bool flag = false;
	
	int choice1 = 0, choice2 = 0, randNumber=0;

	Battleground b;
	Creature* player1;
	Creature* player2;
	
	while (flag == false)

	{

		cout << endl;
		cout << "Select two fighters to fight one another." << endl;
		cout << "1. Harry Potter" << endl;
		cout << "2. Medusa" << endl;
		cout << "3. Blue Men" << endl;
		cout << "4. Barbarian" << endl;
		cout << "5. Vampire" << endl;
		cout << "6. Return to main menu" << endl;


		//first attacker is player 1  
		cout << endl;
		cout << "Select Player 1 by entering the number next to the player name above or enter 6 to return to main menu." << endl;
		choice1 = integerInputValidation(1, 6);

		if (choice1 != 6)

		{
			

			cout << "Select Player 2 by entering the number next to the players names above." << endl;
			choice2 = integerInputValidation(1, 5);

			//1 1,22,33,44,55,12,13,14,15,

			//PLAYER ONE 




			if (choice1 == 1)
			{
				player1 = new HarryPotter;

			}


			if (choice1 == 2)
			{
				player1 = new Medusa;

			}


			if (choice1 == 3)
			{
				player1 = new BlueMen;

			}


			if (choice1 == 4)
			{
				player1 = new Barbarian;

			}


			if (choice1 == 5)
			{
				player1 = new Vampire;

			}






			//PLAYER 2 


			if (choice2 == 1)
			{
				player2 = new HarryPotter;

			}


			if (choice2 == 2)
			{
				player2 = new Medusa;

			}


			if (choice2 == 3)
			{
				player2 = new BlueMen;

			}


			if (choice2 == 4)
			{
				player2 = new Barbarian;

			}


			if (choice2 == 5)
			{
				player2 = new Vampire;

			}


			//If rand is 1, player one attacks first

			randNumber = rand() % 4;  //0 1 2 3

			//cout << "rand number is " << randNumber << endl; 
	

			//If rand is 1 or 3, player one attacks first

			if (randNumber == 1 || randNumber == 3)
			{
				player1->setName(1);
				player2->setName(2);

				cout << player1->getName() << " attacks first!" << endl;
				b.play(player1, player2);
				//player1->setName(2)


				delete player1;
				delete player2;


			}



			//If rand is 2 or 0, player two attacks first


			if (randNumber == 2 || randNumber == 0)
			{
				player1->setName(1);
				player2->setName(2);
				cout << player2->getName() << " attacks first!" << endl;
				b.play(player2, player1);



				delete player1;
				delete player2;
			}

		}


		if (choice1 == 6)
		{
			flag = true;
			cout << "You have exited." << endl;
			cout << endl; 

		}

	}

}