#ifndef __HUMAN__HPP__
#define __HUMAN__HPP__
#include "enemy.hpp"

class Human:public Enemy{

    Human(){
        health = 50;
        AttackDamage = 100;
        armor = 30;
    }

};

#endif