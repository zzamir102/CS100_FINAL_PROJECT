#ifndef __MAGE__HPP__
#define __MAGE__HPP__
#include "character.hpp"

using namespace std;

class Mage : public Character {

public:

	Mage(const string& _name) {
		name = _name;
		type = "Mage";
		health = 100.0;
		AttackDamage = 60.0;
		armor = 15.0;
		experience - 0;
		level = 0;
	}

};

#endif
