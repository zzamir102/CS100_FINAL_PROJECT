#ifndef __ability_test_hpp__
#define __ability_test_hpp__

#include "../header/ability/ability.hpp"

using namespace std;

TEST(AbilityTest, getType1){
    archerAbility testArcher;
    EXPECT_EQ(testArcher.getType(), "Archer");
}
TEST(AbilityTest, getType2){
    mageAbility testMage;
    EXPECT_EQ(testMage.getType(), "Mage");
}
TEST(AbilityTest, getType3){
    knightAbility testKnight;
    EXPECT_EQ(testKnight.getType(), "Knight");
}

TEST(AbilityTest, getCatchPhrase1){
    archerAbility testArcher;
    EXPECT_EQ(testArcher.getcatchPhrase(), "BULLSEYE!");
}
TEST(AbilityTest, getCatchPhrase2){
    mageAbility testMage;
    EXPECT_EQ(testMage.getcatchPhrase(), "Healing!");
}
TEST(AbilityTest, getCatchPhrase3){
    knightAbility testKnight;
    EXPECT_EQ(testKnight.getcatchPhrase(), "ARMORING UP!");
}


#endif
