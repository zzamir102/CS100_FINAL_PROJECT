#ifndef __DEMON__HPP__
#define __DEMON__HPP__
#include "enemy.hpp"

class Demon:public Enemy{

public:
    Demon(){
        health = 100;
        AttackDamage = 80;
        armor = 70;
    }

};

#endif
