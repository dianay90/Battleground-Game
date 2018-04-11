
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
	int numberOfAttackDie; 
	int numberofDefenseDie;
	int attackDieSides;
	int attackRoll; 
	int defenseRoll; 
	int armor; 
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
	void setName(int);
	virtual ~Creature() = 0;
	





};


#endif 

