// Niamh Andrews Text Based Missile Game.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	//Declairing variables
	std::string launchCode = "3668"; //"D O N T" on a phone/numerical and text keypad
	std::string menuSelection1 = "";
	std::string menuSelection2 = "";
	int enemyShip1Ypos = 83;
	int friendlyShip1Ypos = 66;
	int friendlyShip1Xpos = 66;



	//TEXT COLOUR: GREEN
	std::cout << "_______________________________________________________\n";
	std::cout << "|                                                     |\n";
	std::cout << "|                                                     |\n";
	std::cout << "|             DARPA MISSILE DEFENCE SYSTEM            |\n";
	std::cout << "|                                                     |\n";
	std::cout << "|_____________________________________________________|\n";
	std::cout << "\n";
	std::cout << "\n";
	system("PAUSE");

	std::cout << "\n";
	std::cout << "Missile defence system activated\n";
	std::cout << "Please choose from the following options : \n";
	std::cout << "1) Scan for targets\n";
	std::cout << "2) Launch codes\n";
	std::cout << "3) Close defence system\n\n";

	
	while (menuSelection1 != "1" || menuSelection1 != "2" || menuSelection1 != "3")
	{
		std::cin >> menuSelection1;

		if (menuSelection1 == "1")
		{
			std::cout << "Scanning for targets . . .\n";
			system("PAUSE");
			std::cout << "Targets found!\n";
			system("PAUSE");
			system("CLS");
			std::cout << "Target 1 - Friendly  x: 5 y: 0\n";
			std::cout << "Target 2 - Friendly x: 11 y: 0\n";
			std::cout << "Target 2 - Enemy ship x: 11 y: 0\n";
			std::cout << "Target 2 - Enemy aircraft carrier x: 11 y: 0\n";
			std::cout << "\n";
			std::cout << "Your current position is : 5, 5\n";
			std::cout << "\n";
			system("PAUSE");
			std::cout << "Pick a direction to fire in - North, South, East or West : \n\n";
			while (menuSelection2 != "North" || menuSelection2 != "South" || menuSelection2 != "East" || menuSelection2 != "West")
			{
				std::cin >> menuSelection2;

				if (menuSelection2 == "North")
				{
					std::cout << "Target 1 - Friendly  x: 5 y: 0\n";

				}
				else if (menuSelection2 == "South")
				{
					std::cout << "Target 2 - Enemy ship x: 11 y: 0\n";
				}
				else if (menuSelection2 == "East")
				{
					std::cout << "Target 2 - Friendly x: 11 y: 0\n";
				}
				else if (menuSelection2 == "West")
				{
					std::cout << "Target 2 - Enemy aircraft carrier x: 11 y: 0\n";
				}
				else
				{
					std::cout << "\nPlease choose from either - North, South, East or West :  \n\n";
				}
			}


		}

		else if (menuSelection1 == "2")
		{
			std::cout << "\nThe launch code is	:	(DONT on a phone keypad)\n\n";
			std::cout << "Please choose from the following options : \n";
			std::cout << "1) Scan for targets\n";
			std::cout << "2) Launch codes\n";
			std::cout << "3) Close defence system\n\n";
		}

		else if (menuSelection1 == "3")
		{
			std::cout << "\nThank you for not firing any more missiles.\nGoodbye\n\n";
			system("PAUSE");
			break;
		}

		else
		{
			std::cout << "\nPlease choose from either 1, 2 or 3\n\n";
		}
	}
	
	return 0;
}

typedef struct Position
{
	int x;
	int y;

	void print()
	{
		std::cout << x << y << std::endl;
	}
}Coordinates;

enum WarHead { EXPLOSIVE, NUCLEAR };

typedef struct Enemy {
	Coordinates coordinates;
}Target;

struct Missile {
	WarHead payload;
	Coordinates coordinates;
	Target target;

	bool armed;

	void arm()
	{
		if (armed)
			armed = false;

		else
			armed = true;
	}

	void update() {
		coordinates.x += 1;
		coordinates.y += 2;

	}

};

