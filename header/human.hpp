#ifndef __HUMAN__HPP__
#define __HUMAN__HPP__
#include "enemy.hpp"

class Human:public Enemy{

public:
    Human(){
        health = 100.0;
        AttackDamage = 40.0;
        armor = 50.0;
    }

};

#endif
