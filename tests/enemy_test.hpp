#ifndef __enemy_test_hpp__
#define __enemy_test_hpp__

#include "gtest/gtest.h"
#include "../header/enemy.hpp"
#include "../header/demon.hpp"
#include "../header/human.hpp"

using namespace std;

TEST(EnemyTest, testBasic){
    Human humanTest;
    EXPECT_EQ(humanTest.getHealth(), 100.0);
    EXPECT_EQ(humanTest.getAttackDamage(), 40.0);
    EXPECT_EQ(humanTest.getArmor(), 50.0);
}

TEST(EnemyTest, AddHealth){
    Human humanTest;
    humanTest.addHealth(30);
    EXPECT_EQ(humanTest.getHealth(), 130.0);
}

TEST(EnemyTest, AddAttackDamage){
    Human humanTest;
    humanTest.addAttackDamage(10);
    EXPECT_EQ(humanTest.getAttackDamage(), 50.0);
}

TEST(EnemyTest, AddArmor){
    Human humanTest;
    humanTest.addArmor(20);
    EXPECT_EQ(humanTest.getArmor(), 70.0);
}

TEST(EnemyTest, testBasic){
    Demon demonTest;
    EXPECT_EQ(demonTest.getHealth(), 100.0);
    EXPECT_EQ(demonTest.getAttackDamage(), 80.0);
    EXPECT_EQ(demonTest.getArmor(), 70.0);
}

TEST(EnemyTest, AddHealth){
    Demon demonTest;
    demonTest.addHealth(30);
    EXPECT_EQ(demonTest.getHealth(), 130.0);
}

TEST(EnemyTest, AddAttackDamage){
    Demon demonTest;
    demonTest.addAttackDamage(20);
    EXPECT_EQ(demonTest.getAttackDamage(), 100.0);
}

TEST(EnemyTest, AddArmor){
    Demon demonTest;
    demonTest.addArmor(30);
    EXPECT_EQ(demonTest.getArmor(), 100.0);
}

#endif
