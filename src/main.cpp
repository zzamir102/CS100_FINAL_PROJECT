#include "../header/character.hpp"
#include "../header/knight.hpp"
#include "../header/mage.hpp"
#include "../header/archer.hpp"
#include "../header/ability/archerAbility.hpp"
#include "../header/ability/knightAbility.hpp"
#include "../header/ability/mageAbility.hpp"
#include "../header/AbstractFactory.hpp"
#include "../header/enemy.hpp"
#include "../header/human.hpp"
#include "../header/demon.hpp"
#include <iostream>
#include <string>
using namespace std;

string MainMenu(AbstractFactory* &factory) 
{
	cout << "---------------------------------" << endl;
	cout << "Welcome to Kingdom  of Buritania!" << endl;
	cout << "---------------------------------" << endl << endl; 

	cout << "Choose Player Name: ";
	string playerName;
	getline(cin, playerName);
	cout << endl;
	cout << "Hello " << playerName << ", which character type do you wish to be" << endl << endl;
	
	cout << "---------------------------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "Knight: The knight is a strong chracter that utilizes his armor to win fights. The knight's special ability will increase his armor." << endl;
	cout << "---------------------------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "Mage: The mage is an intelligient sourcer that utilizes magic to win battles. The mage's special ability will heal his health." << endl; 
	cout << "---------------------------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "Archer: The archer is a skilled bowman who destroys enemies with precise aim. The archer's special ability will increase attack damage by 2." << endl;
	cout << "---------------------------------------------------------------------------------------------------------------------------------------------" << endl << endl; 

	bool valid = false;
	string character;				
	
	while (valid == false) {
		cout << "Enter one of the above characters: ";
		cin >> character;
		cout << character << endl;

		if (character == "Knight") {
			cout << endl << "Welcome Courageous Knight to the Kingdom!" << endl << endl;
			valid = true;
		}
		else if (character == "Mage") {
			cout << endl << "Welcome All-Powerful Mage to the Kingdom!" << endl << endl;
			valid = true;
		}
		else if (character == "Archer") {
			cout << endl << "Welcome loyal Archer to the Kingdom!" << endl << endl;
			valid = true;
		}
		else {
			valid = false;
			cout << "Oops! You have entered an invalid character, enter one of the following:" << endl << endl;
			cout << "-------------------" << endl;
			cout << "Knight: description" << endl;
			cout << "-------------------" << endl;
			cout << "Mage: description" << endl;
			cout << "-------------------" << endl;
			cout << "Archer: description" << endl;
			cout << "-------------------" << endl << endl;
		}
	}

	if (character == "Knight") {
		factory = new KnightFactory;
	}
	else if (character == "Mage") {
		factory = new MageFactory;
	}
	else if (character == "Archer") {
		factory = new ArcherFactory;
	}

	return playerName;
}

int input(int numRange1, int numRange2) {
	int userInput;
	cout << "Enter the numbers: " << numRange1 << " to " << numRange2 << endl;
	cin >> userInput;
	while (!((userInput >= numRange1) && (userInput <= numRange2))) {
		cout << "Oops! Please Enter a number between " << numRange1 << " to " << numRange2 << endl;
		cin >> userInput;
	}

	return userInput;
}

void Level1(Character* _entry, Ability* _ability) {

	cout << "================================" << endl;
	cout << "---------Enter Level 1---------" << endl;
	cout << "================================" << endl << endl;
	cout << "==============================================" << endl;
	cout << "   The Strongest Human on Earth has arrived    " << endl;
	cout << "==============================================" << endl << endl;

	cout << "Get ready to attack " << _entry->getName() << "!" << endl;
	cout << endl << "CAUTION: You can only use your special ability ONCE." << endl;

	int userinput = 0;
	bool _specialAbility = false; 
	double usedAbility = 0;
	double oldStat = 0.0;
	Enemy* enemy1 = new Human;
	bool temp = false;

	while (enemy1->getHealth() >= 0 && _entry->getHealth() >= 0) {
		if (_specialAbility == false) {
			cout << "CHOOSE YOUR ATTACK: " << endl;
			cout << "(1) Basic Attack" << endl;
			cout << "(2) Special Attack" << endl;
			userinput = input(1, 2);
		}
		else if (_specialAbility == true) {
			cout << "CHOOSE YOUR ATTACK: " << endl;
			cout << "(1) Basic Attack" << endl;
			userinput = input(1, 1);
		}
		
		if (_entry->getType() == "Archer") {
			if (userinput == 1) {
				enemy1->Defence(_entry->Attack());
			}
			else if (userinput == 2) {
				enemy1->Defence(_ability->specialAbility(_entry->getArmor(), _entry->getHealth(), _entry->getAttackDamage()));
				_specialAbility = true; 
			}
		}
		else if(_entry->getType() == "Knight") {
			if (userinput == 1) {
				enemy1->Defence(_entry->Attack());
			}
			else if (userinput == 2) {
				oldStat = _entry->getArmor();
				usedAbility = _ability->specialAbility(_entry->getArmor(), _entry->getHealth(), _entry->getAttackDamage());
				_entry->setArmor(usedAbility);
				_specialAbility = true;
			}
		}
		else if (_entry->getType() == "Mage") {
			if (userinput == 1) {
				enemy1->Defence(_entry->Attack());
			}
			else if (userinput == 2) {
				oldStat = _entry->getHealth();
				usedAbility = _ability->specialAbility(_entry->getArmor(), _entry->getHealth(), _entry->getAttackDamage());
				_entry->setHealth(usedAbility);
				_specialAbility = true;
			}
		}
		cout << "Good Attack! " << "The enemy's health is: " << enemy1->getHealth() << endl;
		
		if (enemy1->getHealth() <= 0) {
			break;
		}
		_entry->Defence(enemy1->Attack());
		if (_specialAbility == true && temp == false) {
			if (_entry->getType() == "Knight") {
				_entry->setHealth(oldStat);
				temp = true;
			}
			else if (_entry->getType() == "Mage") {
				_entry->setHealth(oldStat);
				temp = true;
			}
		}
		cout << "The enemy just attacked you!" << endl << "This is your current health: " << _entry->getHealth(); 
		
		cout << endl << "Now its you're turn to attack again!" << endl;
		
	}

	if (_entry->getHealth() <= 0) {
		cout << "YOU DIED!" << endl;
		return;
	}

	delete enemy1;

}

int main() {
	
	AbstractFactory* _Factory;
	string character;
	character = MainMenu(_Factory);
	Character* entry = _Factory->CreateCharacter(character);
	Ability* ability = _Factory->CreateAbility();
	Level1(entry, ability);

	delete entry;
	delete ability;
	delete _Factory;

	return 0;
}
