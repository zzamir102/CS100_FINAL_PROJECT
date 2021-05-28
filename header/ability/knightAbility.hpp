#pragma once
#ifndef __KNIGHTABILITY_HPP__
#define __KNIGHTABILITY_HPP__

#include "ability.hpp"

class knightAbility : public Ability
{
public:
    knightAbility() {
        type = "Knight";
        catchPhrase = "";
    }

    virtual void specialAbility() {
        return;
    }

};




#endif
