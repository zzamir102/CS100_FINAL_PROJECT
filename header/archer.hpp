#ifndef __ARCHER_HPP__
#define __ARCHER_HPP__

#include "character.hpp"

using namespace std;

class Archer : public Character {

public:

	Archer(const string& name) {
		this->name = name;
		type = "Archer";
		health = 100;
		AttackDamage = 60.0;
		armor = 7.5;
		experience = 0;
		level = 0;
	}
};




#endif 

