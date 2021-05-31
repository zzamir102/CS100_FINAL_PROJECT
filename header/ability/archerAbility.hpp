#pragma once
#ifndef __ARCHERABILITY_HPP__
#define __ARCHERABILITY_HPP__

#include "ability.hpp"

class archerAbility : public Ability
{
public:
    archerAbility() {
        type = "Archer";
        catchPhrase = "BULLSEYE!"
    }

    virtual double specialAbility(double _armor, double _health, double _AttackDamage) {
        return 2 * _AttackDamage;
    }    

};

#endif
