#ifndef __enemy_test_hpp__
#define __enemy_test_hpp__

#include "gtest/gtest.h"
#include "../header/enemy.hpp"
#include "../header/demon.hpp"
#include "../header/human.hpp"

using namespace std;

TEST(EnemyTest, testHuman){
    Human humanTest;
    EXPECT_EQ(humanTest.getHealth(), 100.0);
    EXPECT_EQ(humanTest.getAttackDamage(), 40.0);
    EXPECT_EQ(humanTest.getArmor(), 50.0);
}

TEST(EnemyTest, HumanAddHealth){
    Human humanTest;
    humanTest.addHealth(30);
    EXPECT_EQ(humanTest.getHealth(), 130.0);
}

TEST(EnemyTest, HumanAddAttackDamage){
    Human humanTest;
    humanTest.addAttackDamage(10);
    EXPECT_EQ(humanTest.getAttackDamage(), 50.0);
}

TEST(EnemyTest, HumanAddArmor){
    Human humanTest;
    humanTest.addArmor(20);
    EXPECT_EQ(humanTest.getArmor(), 70.0);
}

TEST(EnemyTest, testDemon){
    Demon demonTest;
    EXPECT_EQ(demonTest.getHealth(), 100.0);
    EXPECT_EQ(demonTest.getAttackDamage(), 80.0);
    EXPECT_EQ(demonTest.getArmor(), 70.0);
}

TEST(EnemyTest, DemonAddHealth){
    Demon demonTest;
    demonTest.addHealth(30);
    EXPECT_EQ(demonTest.getHealth(), 130.0);
}

TEST(EnemyTest, DemonAddAttackDamage){
    Demon demonTest;
    demonTest.addAttackDamage(20);
    EXPECT_EQ(demonTest.getAttackDamage(), 100.0);
}

TEST(EnemyTest, DemonAddArmor){
    Demon demonTest;
    demonTest.addArmor(30);
    EXPECT_EQ(demonTest.getArmor(), 100.0);
}

#endif
