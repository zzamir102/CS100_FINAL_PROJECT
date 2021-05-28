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

    virtual void specialAbility() {
        return;
    }

};




#endif
