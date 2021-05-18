#ifndef __DEMON__HPP__
#define __DEMON__HPP__
#include "enemy.hpp"

class Demon:public Enemy{

    Demon(){
        health = 100;
        AttackDamage = 20;
        armor = 60;
    }

};

#endif