
#pragma once
#ifndef __ENEMY_HPP__
#define __ENEMY_HPP__

#include <string>
#include <iostream>

using namespace std;

class Enemy
{
protected:
    double health;
    double AttackDamage;
    double armor;

public:
    Enemy()
    {
        health = 0.0;
        AttackDamage = 0.0;
        armor = 0.0;
    }

    double getHealth() {
        return health;
	}

    double getArmor() {
        return armor;
    }

    void display() {
        cout << "Health: " << health;
        cout << "Armor: " << armor; 
    }

    double getAttackDamage() {
        return AttackDamage;
    }
    //adder
    void addHealth(double health)
    {
        this->health += health;
    }

    void addAttackDamage(double dmg)
    {
        this->AttackDamage += dmg;
    }

    void addArmor(double armor)
    {
        this->armor += armor;
    }
   //getter 
    double Attack()
    {
        return AttackDamage;
    }

    void Defence(double dmg)
    {
        double dmgDefended = 0.0;
        dmgDefended = (dmg * armor) / 100;
        health = health - (dmg - dmgDefended);
    }
};

#endif // !__ENEMY_HPP__
