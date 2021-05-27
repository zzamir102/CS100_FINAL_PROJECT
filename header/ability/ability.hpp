#pragma once
#ifndef __ABILITY_HPP__
#define __ABILITY_HPP__

#include <string>

using namespace std;


class Ability {

protected:
	//Stores the type of ability i.e Knight, Mage, Archer
	string type;
	//Each ability will have its own catchphrase
	string catchPhrase;

public:
	Ability() {
		type = "";
		catchPhrase = "";
	}

	string getType() {
		return type;
	}

	string getcatchPhrase() {
		return catchPhrase;
	}

	//Implement Strategy Pattern
	virtual void specialAbility() = 0;



};

#endif // !__ABILITY_HPP__
