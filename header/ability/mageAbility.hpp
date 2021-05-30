#pragma once
#ifndef __MAGEABILITY_HPP__
#define __MAGEABILITY_HPP__

#include "ability.hpp"

class mageAbility : public Ability
{
public:
    mageAbility() {
        type = "Mage";
        catchPhrase = "";
    }
    virtual double specialAbility(double _armor, double _health, double _AttackDamage) {
        return 2 * _health;
    }
    

};

#endif
