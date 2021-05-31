#pragma once
#ifndef __KNIGHT_HPP__
#define __KNIGHT_HPP__

#include "character.hpp"

using namespace std;

class Knight : public Character {

public:
	
	Knight(const string& name) {
		this->name = name;
		type = "Knight";
		health = 100.0;
		AttackDamage = 49.0;
		armor = 30.0;
		experience = 0;
		level = 0;
	}


};


#endif // !__KNIGHT_HPP__
