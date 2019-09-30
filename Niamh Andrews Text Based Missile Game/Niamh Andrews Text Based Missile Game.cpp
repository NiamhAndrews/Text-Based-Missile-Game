// Niamh Andrews Text Based Missile Game.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	//Declairing variables
	std::string launchCode = "3668"; //"D O N T" on a phone/numerical and text keypad
	int enemyShip1Ypos = 83;
	int friendlyShip1Ypos = 66;
	int friendlyShip1Xpos = 66;




	/*std::cout << "_____          _____  _____          __  __ _____  _____ _____ _____ _      ______\n";
	std::cout << "| __  \   /\   | __  \| __ \  /\ | \/  |_   _|/ ____ / ____ | _   _| |    |  ____| \n";
	std::cout << "| |  | | /  \  | |__) | |__) / \ | \  / | | | | (___ | (___   | | | |    | |__\n";
	std::cout << "| |  | |/ /\ \ | _   /|  ___/ /\ \   | |\/| | | |  \___ \\___ \  | | | |    |  __| \n";
	std::cout << "| |__| / ____ \| | \ \| |  / ____ \  | |  | |_| |_ ____) | ___) | _| |_| |____| |____\n";
	std::cout << "| _____¦/ _  \ ____ \_\_| __\_\_ | _ / _ / _   \_\_ | _ | _ | _ | _____ | _____ / _____/|_____ | ______ | ______ | __ __  __\n";
	std::cout << "| __ \ | ____ | ____ | ____ |\  | | / ____ | ____|  / ____\ \   / / ____ | __   __ | ____ | \/  |\n";
	std::cout << "| |  | | |__  | |__  | |__  | \ | | |    | |__ | (___  \ \_/ / (___    | |  | |__ | \  / |\n";
	std::cout << "| |  | |  __| |  __| |  __| | . ` | |    |  __ | \___ \  \ / \___ \   | |  |  __| | |\/| |\n";
	std::cout << "| |__| | |____| |    | |____| |\  | |____| |____   ____) |  | |  ____) |  | |  | |____| |  | |\n";
	std::cout << "|_____/|______|_|    |______|_| \_| \_____ |______| |_____/   |_| |_____/   |_|  |______ | _|  |_ | \n";
	*/

	std::cout << "_______________________________________________________\n";
	std::cout << "¦                                                      ¦\n";
	std::cout << "DARPA MISSILE DEFENCE SYSTEM!\n";
	std::cout << "\n";
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

