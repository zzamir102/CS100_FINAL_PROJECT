#include "../header/character.hpp"
#include "../header/knight.hpp"
#include "../header/mage.hpp"
#include "../header/archer.hpp"
#include "../header/ability/archerAbility.hpp"
#include "../header/ability/knightAbility.hpp"
#include "../header/ability/mageAbility.hpp"
#include "../header/AbstractFactory.hpp"
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
	
	cout << "-------------------" << endl;
	cout << "Knight: description" << endl;
	cout << "-------------------" << endl;
	cout << "Mage: description" << endl; 
	cout << "-------------------" << endl;
	cout << "Archer: description" << endl;
	cout << "-------------------" << endl << endl; 

	bool valid = false;
	string character;				//character type
	
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
	
	return character;	
}

int main() {
	AbstractFactory* _Factory;
	string character;
	character = MainMenu(_Factory);
	Character* entry = _Factory->CreateCharacter(character);
	Ability* ability = _Factory->CreateAbility();
	cout << entry->getType();
	
	delete _Factory;	
	delete entry;
	delete ability;		

	return 0;
}
