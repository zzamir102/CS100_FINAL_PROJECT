#pragma once
#ifndef __ARCHERABILITY_HPP__
#define __ARCHERABILITY_HPP__

#include "ability.hpp"

class archerAbility : public Ability
{
public:
    archerAbility(){
        type = "archer";
    }

};




#endif