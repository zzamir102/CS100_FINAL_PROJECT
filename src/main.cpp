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

string CharSel(AbstractFactory* &factory) 
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
		if (cin.fail()) {
			cout << endl << "Oops! Please Enter a number between " << numRange1 << " to " << numRange2 << endl;
			cin.clear();
			cin.ignore(100, '\n');
			cin >> userInput;
		}
		else {
			cout << endl << "Oops! Please Enter a number between " << numRange1 << " to " << numRange2 << endl;
			cin >> userInput;
		}
	}
	return userInput;
}

void shop(Character* _entry) {

	cout << "========================" << endl;
	cout << "--------Welcome---------" << endl;
	cout << "----------To------------" << endl;
	cout << "-------The Shop---------" << endl;
	cout << "========================" << endl;

	cout << endl << "Here is you're expericence points " << _entry->getName() << ": " << _entry->getExperience();
	cout << endl << endl;

	bool exitShop = false; 
	int userinput = 0; 

	while (exitShop != true) {
		cout << "(1) Add 10 armor (Cost: Exp. 25)" << endl;
		cout << "(2) Add 5 attack damage (Cost: Exp. 50)" << endl;
		cout << "(3) Display current Experience" << endl;
		cout << "(4) Return to Main Menu" << endl;
		userinput = input(1, 4);
		if (userinput == 1) {
			if (_entry->getExperience() >= 25) {
				_entry->spendExperience(25);
				_entry->addArmor(10); 
				cout << endl;
				cout << "Added 10 armor to your character!" << endl << endl;
				cout << endl;
			}
			else {
				cout << endl << "You don't have enough experience points, play more to earn more!" << endl << endl;
			}
		}
		else if(userinput == 2) {
			if (_entry->getExperience() >= 50) {
				_entry->spendExperience(50);
				_entry->addAttackDamage(5);
				cout << endl;
				cout << "Added 5 attack damage to your character!" << endl;
				cout << endl;
			}
			else {
				cout << endl << "You don't have enough experience points, play more to earn more!" << endl;
				cout << endl;
			}
		}
		else if (userinput == 3) {
				cout << endl << "Here is you're expericence points " << _entry->getName() << ": " << _entry->getExperience();
				cout << endl << endl;
		}
		else if (userinput == 4) {
			cout << endl;
			cout << "Going back to the main manu...." << endl;
			cout << endl;
			exitShop = true;
		}
	}
}

bool Level1(Character* _entry, Ability* _ability) {

	cout << "================================" << endl;
	cout << "---------Enter Level 1---------" << endl;
	cout << "================================" << endl << endl;
	cout << "==============================================" << endl;
	cout << "   The Strongest Human on Earth has arrived    " << endl;
	cout << "==============================================" << endl << endl;

	cout << "Get ready to attack " << _entry->getName() << "!" << endl;
	cout << endl << "CAUTION: You can only use your special ability TWICE." << endl;

	int userinput = 0;
	int count = 0;
	bool _specialAbility = false; 
	double usedAbility = 0;
	double oldStat = 0.0;
	Enemy* enemy1 = new Human;
	bool temp = false;

	while (enemy1->getHealth() >= 0 && _entry->getHealth() >= 0) {
		cout << endl << "Now its you're turn to attack!" << endl;
		if (count < 2) {
			cout << "CHOOSE YOUR ATTACK: " << endl;
			cout << "(1) Basic Attack" << endl;
			cout << "(2) Special Attack" << endl;
			userinput = input(1, 2);
		}
		else {
			cout << "CHOOSE YOUR ATTACK: " << endl;
			cout << "(1) Basic Attack" << endl;
			userinput = input(1, 1);
		}
		
		if (_entry->getType() == "Archer") {
			if (userinput == 1) {
				enemy1->Defence(_entry->Attack());
			}
			else if (userinput == 2) {
				cout << _ability->getcatchPhrase() << endl;
				enemy1->Defence(_ability->specialAbility(_entry->getArmor(), _entry->getHealth(), _entry->getAttackDamage()));
				_specialAbility = true; 
				count = count + 1;
			}
		}
		else if(_entry->getType() == "Knight") {
			if (userinput == 1) {
				enemy1->Defence(_entry->Attack());
			}
			else if (userinput == 2) {
				cout << _ability->getcatchPhrase() << endl;
				oldStat = _entry->getArmor();
				usedAbility = _ability->specialAbility(_entry->getArmor(), _entry->getHealth(), _entry->getAttackDamage());
				_entry->setArmor(usedAbility);
				_specialAbility = true;
				count = count + 1;
				enemy1->Defence(_entry->Attack());
			}
		}
		else if (_entry->getType() == "Mage") {
			if (userinput == 1) {
				enemy1->Defence(_entry->Attack());
			}
			else if (userinput == 2) {
				cout << _ability->getcatchPhrase() << endl;
				oldStat = _entry->getHealth();
				usedAbility = _ability->specialAbility(_entry->getArmor(), _entry->getHealth(), _entry->getAttackDamage());
				_entry->setHealth(usedAbility);
				_specialAbility = true;
				count = count + 1;
				enemy1->Defence(_entry->Attack());
			}
		}
		cout << endl << "Good Attack! " << "The enemy's health is: " << enemy1->getHealth() << endl;
		
		if (enemy1->getHealth() <= 0) {
			break;
		}
		_entry->Defence(enemy1->Attack());
		if (_specialAbility == true && count <= 2) {
			if (_entry->getType() == "Knight") {
				_entry->setArmor(oldStat);
				_specialAbility = false;
			}
			else if (_entry->getType() == "Mage") {
				_entry->setHealth(oldStat);
				_specialAbility = false;
			}
		}
		cout << endl << "The enemy just attacked you!" << endl << "This is your current health: " << _entry->getHealth() << endl;	
	}
	

	delete enemy1;
	if (_entry->getHealth() <= 0) {
		cout << "YOU DIED!" << endl;
		cout << endl;
		_entry->setHealth(100.0);
		return false;
	}
	else {
		cout << "YOU BEAT THE ENEMY!" << endl;
		cout << endl;
		_entry->setHealth(100.0);
		return true;
	}
}

int main() {
	
	AbstractFactory* _Factory;
	string character;
	character = CharSel(_Factory);
	Character* entry = _Factory->CreateCharacter(character);
	Ability* ability = _Factory->CreateAbility();
	bool levelFailed = false;
	bool endGame = false;
	int userinput = 0;

	while (endGame == false) {
		cout << "=============================" << endl;
		cout << "----------Main Menu----------" << endl;
		cout << "=============================" << endl << endl;
		cout << "Choose one of the follow options:" << endl;
		cout << "(1) Go to Level 1!" << endl;
		cout << "(2) Go to the shop" << endl;
		cout << "(3) Show my player attributes" << endl;
		cout << "(4) Exit" << endl;
		userinput = input(1, 4);
		if (userinput == 1) {
			levelFailed = Level1(entry, ability);
			while (levelFailed == false) {
				cout << "Press 1 if you would like to try the level again or 2 to return to the menu!" << endl;
				int _input = 0;
				_input = input(1, 2);
				cout << endl;
				if (_input == 1) {
					levelFailed = Level1(entry, ability);
				}
				else if (_input == 2) {
					break;
				}
			}
			if (levelFailed == true) {
				entry->addExperience(50);
				cout << "You have earned 50 experience points!" << endl;
				cout << "Go to the shop to spend your experience points!" << endl << endl;
			}
		}
		else if (userinput == 2) {
			shop(entry);
		}
		else if (userinput == 3) {
			cout << endl;
			entry->printStats();
			cout << endl;
		}
		else if (userinput == 4) {
			cout << "BYE see you next time!" << endl;
			endGame = true;
		}
	}

	delete entry;
	delete ability;
	delete _Factory;

	return 0;
}
