#pragma once
#ifndef __CHARACTER_HPP__
#define __CHARACTER_HPP__

#include <string>
#include <iostream>

using namespace std;

class Character {

protected:
	string name;
	string type;
	double health;
	double AttackDamage;
	double armor;
	int experience;
	int level;

public:
	Character() {
		name = "";
		health = 0.0;
		AttackDamage = 0.0;
		armor = 0.0;
		experience = 0;
		level = 0;
	}

	string getType() {
		return type;
	}

	string getName() {
		return name;
	}

	void setName(const string& _name) {
		this->name = _name;
	}

	void addHealth(double health) {
		this->health += health;
	}

	void addAttackDamage(double dmg) {
		this->AttackDamage += dmg;
	}

	void addArmor(double armor) {
		this->armor += armor;
	}

	void addExperience(int exp) {
		this->experience += exp;
	}

	void printStats() {
		cout << name << "'s" << " Statistics:" << endl;
		cout << "--------------------------------" << endl;
		cout << "Type: " << type << endl;
		cout << "Health: " << health << endl;
		cout << "Armor: " << armor << endl;
		cout << "Current Experience: " << experience << endl;
		cout << "Current Level: " << level << endl;
		cout << "--------------------------------" << endl;
	}

	bool upgrade() {

		if (experience == 100) {
			level = level + 1;
			experience = 0;
			return true;
		}
		else {
			return false;
		}

	}

	double Attack() {
		return AttackDamage;
	}

	void Defence(double dmg) {
		double dmgDefended = 0.0;
		dmgDefended = (dmg * armor) / 100;
		health = dmg - dmgDefended;
	}

};

#endif // !__CHARACTER_HPP__
