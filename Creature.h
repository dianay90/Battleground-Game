
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

#ifndef CREATURE_H
#define CREATURE_H
#include <iostream>
using namespace std;
#include <cmath>
#include <string>




class Creature

{

protected: 
	
	int defenseDieSides;
	int maxStrength; 
	int numberOfAttackDie; 
	int numberofDefenseDie;
	int attackDieSides;
	int attackRoll; 
	int defenseRoll; 
	int armor; 
	int damage; 
	int strengthPoints; 
	string creatureName; 
	int life; 




public: 
	
	virtual int attack();

	virtual int defend();


	//TA DRAKE APPROVED THIS SET UP WHERE MY DAMAGE INFLICTED IS SEPARATE FROM MY DEFENSE ROLL

	virtual void damageReceived(int, int)	; 
	int getStrengthPoints(); 
	string getName(); 
	int getArmor(); 
	virtual bool alive();
	//void setName(int);
	virtual ~Creature() = 0;
	void setName(string nickname, int);

	virtual void restoreStrength(); 
	//Creature(string, char);




};


#endif 

