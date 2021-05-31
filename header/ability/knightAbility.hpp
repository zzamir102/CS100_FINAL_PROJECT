#pragma once
#ifndef __KNIGHTABILITY_HPP__
#define __KNIGHTABILITY_HPP__

#include "ability.hpp"

class knightAbility : public Ability
{
public:
    knightAbility() {
        type = "Knight";
        catchPhrase = "ARMORING UP!";
    }

    virtual double specialAbility(double _armor, double _health, double _AttackDamage) {
        return 2 * _armor;
    }

};




#endif
