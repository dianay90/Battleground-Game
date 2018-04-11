
/*********************************************************************
** Program name: Project 3
** Author: Diana Oh
** Date: 5/14/2017
** Description: This program utilizes polymorphism and inheritance to fight creatures in a battle class. A user is prompted a menu and is able to select two
*creatures to fight. Some creatures have an inherent advantage over others due to their special abilities. The creature whose strength points diminish to zero first loses.
*
*The program can be run using the makefile.
**********************************************************************/
/* Input validation function validates user input to ensure it's an integer. It take in arguments integer min and
integer max to ensure the input the user enters is within that range and returns an int.
*/


#include "inputValidation.h"




int integerInputValidation(int min, int max)
{
	bool flag = false;
	bool flag2 = false;
	string userString;
	int number;

	while (flag == false)
	{
		getline(cin, userString);
		flag2 = true; 
		for (int index = 0; index < userString.length() && flag2==true; index++)

		{
			// if the input is a digit 
			if (isdigit(userString[index])) //then make flag, is the flag is true outstide return the number 
											//
			{
				flag2 = true;
			}

			else

			{
				flag2 = false; 
				cout << "Input is invalid. Please enter a valid number." << endl;
				//flag = false;
			}

			
		}

				
		if (flag2 == true)
			{
				number = stoi(userString);
				if ((number >= min) && (number <= max))
				{
					return number;
				}


				
				else
				{
					cout << "Input is invalid. Please enter a valid number." << endl;
					flag = false;
				}
			}



		
		}
	}






string stringInputValidation()
{
	bool flag = false;
	bool flag2 = false;
	bool flag3 = true;
	string userString;
	int number;

	while (flag == false)
	{
		getline(cin, userString);
		flag2 = true; 
		for (int index = 0; index < userString.length() && flag2==true; index++)

		{ 
		
			// if the input is a digit 
			if (isalpha(userString[index])) 
											
			{
				flag2 = true;
				//problem the last number in the string can be OKAY and my code wille xecute
				
			}  
			    

			else

			{
				flag2 = false;
				
				cout << "Input is invalid. Please enter a valid input without any spaces." << endl;
			
			}

			
		}

		if (flag2== true)
		{
			return userString; 
		}
		
	}

}
				
				
