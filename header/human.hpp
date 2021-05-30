#ifndef __HUMAN__HPP__
#define __HUMAN__HPP__
#include "enemy.hpp"

class Human:public Enemy{

public:
    Human(){
        health = 100.0;
        AttackDamage = 30.0;
        armor = 60.0;
    }

};

#endif
