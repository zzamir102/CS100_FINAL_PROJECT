#ifndef __enemy_test_hpp__
#define __enemy_test_hpp__

#include "gtest/gtest.h"
#include "../header/enemy.hpp"
#include "../header/demon.hpp"
#include "../header/human.hpp"

using namespace std;

TEST(HumanTest, testBasic){
    Human humanTest;
    EXPECT_EQ(humanTest.getHealth(), 100.0);
    EXPECT_EQ(humanTest.getAttackDamage(), 40.0);
    EXPECT_EQ(humanTest.getArmor(), 50.0);
}

TEST(HumanTest, AddHealth){
    Human humanTest;
    humanTest.addHealth(30);
    EXPECT_EQ(humanTest.getHealth(), 130.0);
}

TEST(HumanTest, AddAttackDamage){
    Human humanTest;
    humanTest.addAttackDamage(10);
    EXPECT_EQ(humanTest.getAttackDamage(), 50.0);
}

TEST(HumanTest, AddArmor){
    Human humanTest;
    humanTest.addArmor(20);
    EXPECT_EQ(humanTest.getArmor(), 70.0);
}

TEST(DemonTest, testBasic){
    Demon demonTest;
    EXPECT_EQ(demonTest.getHealth(), 100.0);
    EXPECT_EQ(demonTest.getAttackDamage(), 80.0);
    EXPECT_EQ(demonTest.getArmor(), 70.0);
}

TEST(DemonTest, AddHealth){
    Demon demonTest;
    demonTest.addHealth(30);
    EXPECT_EQ(demonTest.getHealth(), 130.0);
}

TEST(DemonTest, AddAttackDamage){
    Demon demonTest;
    demonTest.addAttackDamage(20);
    EXPECT_EQ(demonTest.getAttackDamage(), 100.0);
}

TEST(DemonTest, AddArmor){
    Demon demonTest;
    demonTest.addArmor(30);
    EXPECT_EQ(demonTest.getArmor(), 100.0);
}

#endif
