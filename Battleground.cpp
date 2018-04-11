
/*********************************************************************
** Program name: Project 4
** Author: Diana Oh
** Date: 5/28/2017
** Description: This program utilizes polymorphism and inheritance to fight creatures in a team. The teams fight each other until members from only one team are left standing.
The winner gets the opportunity to play again, while the losers are taken to the loser stack. The program uses a loser stack to hold the losers and a queue to hold the team
members in the current lineup.

*The program can be run using the makefile.
**********************************************************************/

#include "Battleground.h"


Battleground::Battleground()
{


}


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


/*The team play function orchestrates the combat between the two teams. The players at the head of each line up  alternate attacking
 * each other summoning the battle function, until one of the players die. The winner gets taken to the back of the line, while the loser gets taken to the loser pile. 
 * The round results and ultimately the game results are announced through this function. 
 */



void Battleground::teamPlay()
{

	int round = 0;
	teamAScore = 0;
	teamBScore = 0;
	bool flag = true; 

	//check remove, check while, 


	if (teamA->isEmpty() || teamB->isEmpty())
	{

		flag = false;
	}
	

	while (flag== true)
	{

		// if team a or team b is empty 




		//While both characters are alive

		while ((teamA->getFront()->alive()) && (teamB->getFront()->alive()))

		{



			round++;

			//Round 1

			//cout << "Round: " << round << endl;
			cout << "Round: " << round << ' ' << teamA->getFront()->getName() << " vs." << teamB->getFront()->getName() << endl; 

			battle(teamA->getFront(), teamB->getFront());

			


			cout << endl; 
			//Round 2


			// alive is a boolean 
			if ((teamA->getFront()->alive()) && (teamB->getFront()->alive()) )
			{
				round++;


				cout << "Round: " << round << ' ' << teamA->getFront()->getName() << " vs." << teamB->getFront()->getName() << endl;


				battle(teamB->getFront(), teamA->getFront());


				cout << endl;
			}

		}




		

		round = 0; 
		

		

		// if one team member is dead
		
		if ((!teamA->getFront()->alive()) || (!teamB->getFront()->alive()))
		{
			//DISPLAY ROUND WINNER 

			if (teamB->getFront()->getStrengthPoints() <= 0 && teamA->getFront()->getStrengthPoints() > 0)
			{

				cout << teamA->getFront()->getName() << " vs." << teamB->getFront()->getName() << endl;
				cout << teamA->getFront()->getName() << " is the winner!" << endl;
				teamAScore++;
				//round = 0;
				//cout << "Team A round score: " << teamAScore << endl; 
			}


			if (teamA->getFront()->getStrengthPoints() <= 0 && teamB->getFront()->getStrengthPoints() > 0)
			{
				cout << teamA->getFront()->getName() << " vs." << teamB->getFront()->getName() << endl;
				cout << teamB->getFront()->getName() << " is the winner!" << endl;
				teamBScore++;

				//cout << "Team B round score: " << teamBScore << endl; 
			}

			if (teamB->getFront()->getStrengthPoints() <= 0 && teamA->getFront()->getStrengthPoints() <= 0)
			{
				cout << teamA->getFront()->getName() << " vs." << teamB->getFront()->getName() << endl;
				cout << "The game is a draw!" << endl;
			}


		}

		 

		//If the creature in team A is alive

		
		if (teamA->getFront()->getStrengthPoints() >0)

		{

			cout << "Team A first player old strength points:" << teamA->getFront()->getStrengthPoints() << endl; 

			teamA->getFront()->restoreStrength(); 

			cout << " Team A first player NEW strength points:" << teamA->getFront()->getStrengthPoints() << endl; 
			teamA->moveQueue();
		}


		
		//If the creature in team A is dead

		if (teamA->getFront()->getStrengthPoints() <=0)
		{

			
			lose->addLoser(teamA->getFront());
			teamA->removeFront();

		
		}


		//If the creature in team B is alive
		if (teamB->getFront()->getStrengthPoints() >0)
		{


			cout << "Team B old strength points:" << teamB->getFront()->getStrengthPoints() << endl; 

			teamB->getFront()->restoreStrength();

			cout << "Team B new strength points:" << teamB->getFront()->getStrengthPoints() << endl; 


			teamB->moveQueue();

		}


		if (teamB->getFront()->getStrengthPoints() <= 0)
		{

			lose->addLoser(teamB->getFront());
			teamB->removeFront();

			
		}

		
		


		if (teamA->isEmpty() || teamB->isEmpty())
		{

			flag = false;
		}

	} 
	





	finalWinner(teamAScore, teamBScore);
}


/*This function prints the final outcome of the game to the screen. It takes two int arguments  which hold how many rounds each team won. */

void Battleground::finalWinner(int A, int B)
{

	int display = 0; 
	if (A>B)
	{
		cout << endl;
		cout << "Team A is the winner! " << endl; 
		cout << endl; 
		cout << "Team A won " << A  << " games. " << endl; 
		cout << "Team B won " << B  << " games. " << endl;
	}


	if (B>A)
	{
		cout << endl;
		cout << "Team B is the winner! " << endl;
		cout << endl;
		cout << "Team A won " << A << " games. " << endl;
		cout << "Team B won " << B << " games. " << endl;
	}

	if (A== B)
	{
		cout << endl;
		cout << "Neither team won. The game is a draw. " << endl;
		cout << endl;
		cout << "Team A won " << A << " games. " << endl;
		cout << "Team B won " << B << " games. " << endl;
	}


	//Display Loser Contents 
	cout << endl; 
	cout << "Would you like to display the contents of the loser pile? Enter 1 to display or 2 to not display.";

	display = integerInputValidation(1, 2);

	if (display ==1)
	{
		
		lose->displayLoser();
	}

	if (display ==2)
	{
		

	}

	delete lose;
	delete teamA;
	delete teamB;
	

	//if the do print the function of the loser pile 

}



//The outer menu function is responsible for allowing the user to start game, play again, or exit. 
void Battleground::outerMenu()
{

	bool mainFlag = false;
	int firstChoice = 0;


	while (mainFlag == false)

	{

		cout << "Please select an option below." << endl;
		cout << "1. Start Game" << endl;
		cout << "2. Play Again" << endl;
		cout << "3. Exit the game" << endl;



		firstChoice = integerInputValidation(1, 3);


		if (firstChoice == 1 || firstChoice == 2)
		{


			menu();

		}



		if (firstChoice == 3)
		{
			mainFlag = true;
			cout << "You have exited." << endl;

		}


	}


}




//The menu function is where the character in the lineup are created and assigned nicknames. Afterwards, the teamPlay() function is called within this function. 

void Battleground::menu()
{


	bool flag = false;

	int choice1 = 0, choice2 = 0, randNumber = 0, lineup = 0;
	string nickname;

	Battleground b;
	Creature* player1= NULL;
	Creature* player2=NULL;

	lose = new Loser();
	teamA = new Queue();
	teamB = new Queue();




	while (flag == false)

	{


		cout << "Welcome to Battleground!." << endl;

		cout << "How many players would you like each lineup to hold? The maximum number is ten." << endl;
		lineup = integerInputValidation(1, 10);

		//Type, team, nicknames 

		for (int i = 0; i < lineup; i++)
		{

			cout << "Select a player type for player " << i + 1 << " in Team A or enter 6 to exit" << endl;
			cout << "1. Harry Potter" << endl;
			cout << "2. Medusa" << endl;
			cout << "3. Blue Men" << endl;
			cout << "4. Barbarian" << endl;
			cout << "5. Vampire" << endl;
		

			choice1 = integerInputValidation(1, 5);



			cout << "Please enter player " << i + 1 << " nickname." << endl;
			getline(cin, nickname);
			


			if (choice1 == 1)
			{
				player1 = new HarryPotter;
				player1->setName(nickname, 1);
				

			}
			

			if (choice1 == 2)
			{
				player1 = new Medusa;
				player1->setName(nickname, 1);
				

			}


			if (choice1 == 3)
			{
				player1 = new BlueMen;
				player1->setName(nickname, 1);
				

			}


			if (choice1 == 4)
			{
				player1 = new Barbarian;
				player1->setName(nickname, 1);


			
			}


			if (choice1 == 5)
			{
				player1 = new Vampire;
				player1->setName(nickname, 1);

			}

	

			teamA->addBack(player1);

	

		}


		/*****************************
		 *Player 2 Input
		 ***************************/


		for (int i = 0; i < lineup; i++)
		{


			cout << "Select a player type for player " << i + 1 << " in Team B or enter 6 to exit" << endl;
			cout << "1. Harry Potter" << endl;
			cout << "2. Medusa" << endl;
			cout << "3. Blue Men" << endl;
			cout << "4. Barbarian" << endl;
			cout << "5. Vampire" << endl;
			cout << "6. Exit" << endl;


			choice2 = integerInputValidation(1, 6);

			cout << "Please enter player " << i + 1 << " nickname." << endl;
			getline(cin, nickname);
			//cin.ignore();

			//PLAYER 2 


			if (choice2 == 1)
			{
				player2 = new HarryPotter;
				player2->setName(nickname, 2);

			}


			if (choice2 == 2)
			{
				player2 = new Medusa;
				player2->setName(nickname, 2);
			}


			if (choice2 == 3)
			{
				player2 = new BlueMen;
				player2->setName(nickname, 2);

			}


			if (choice2 == 4)
			{
				player2 = new Barbarian;
				player2->setName(nickname, 2);

			}


			if (choice2 == 5)
			{
				player2 = new Vampire;
				player2->setName(nickname, 2);

			}

			if (choice2 == 6)
			{
				flag = true;
				cout << "You have exited." << endl;
				cout << endl;

			}

			

			teamB->addBack(player2);


	


		}



		// play functions

		

		teamPlay();


		flag = true; 
		

	
	}

	
	
}




