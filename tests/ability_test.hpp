#ifndef __abilityTest_hpp__
#define __abilityTest_hpp__

#include "gtest/gtest.h"
#include "../header/ability/ability.hpp"

using namespace std;

TEST(AbilityTest, getType){
    archerAbility testArcher;
    EXPECT_EQ(testArcher.getType(), "Archer");
}
TEST(AbilityTest, getType){
    mageAbility testMage;
    EXPECT_EQ(testMage.getType(), "Mage");
}
TEST(AbilityTest, getType){
    knightAbility testKnight;
    EXPECT_EQ(testKnight.getType(), "Knight");
}

TEST(AbilityTest, getCatchPhrase){
    archerAbility testArcher;
    EXPECT_EQ(testArcher.getcatchPhrase(), "BULLSEYE");
}
TEST(AbilityTest, getCatchPhrase){
    mageAbility testMage;
    EXPECT_EQ(testMage.getcatchPhrase(), "Healing");
}
TEST(AbilityTest, getCatchPhrase){
    knightAbility testKnight;
    EXPECT_EQ(testKnight.getcatchPhrase(), "ARMORING UP!");
}


#endif