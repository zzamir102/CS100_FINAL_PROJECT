#ifndef __attackDefence_test_hpp__
#define __attackDefence_test_hpp__

#include "gtest/gtest.h"
#include "../header/AbstractFactory.hpp"
#include "../header/human.hpp"
#include "../header/demon.hpp"

//Mage Test
TEST(AttDefTest, MageBasicAttack1) {
    Human humanTest;
    Mage* mageTest = new Mage("name");
    humanTest.Defence(mageTest->Attack());
	EXPECT_EQ(humanTest.getHealth(), 70);
}

TEST(AttDefTest, MageBasicAttack2) {
    Demon demonTest;
    Mage* mageTest = new Mage("name");
    demonTest.Defence(mageTest->Attack());
	EXPECT_EQ(demonTest.getHealth(), 82);
}

TEST(AttDefTest, MageAbility1) {
    Mage* mageTest = new Mage("name");
    Ability* mageAbilTest = new mageAbility();
    double usedAbility = mageAbilTest->specialAbility(mageTest->getArmor(), mageTest->getHealth(), mageTest->getAttackDamage());
	mageTest->setHealth(usedAbility);
    EXPECT_EQ(mageTest->getHealth(), 200);
}

TEST(AttDefTest, MageAbility2) {
    Mage* mageTest = new Mage("name");
    Ability* mageAbilTest = new mageAbility();
    mageTest->setHealth(35);
    double usedAbility = mageAbilTest->specialAbility(mageTest->getArmor(), mageTest->getHealth(), mageTest->getAttackDamage());
	mageTest->setHealth(usedAbility);
    EXPECT_EQ(mageTest->getHealth(), 70);
}

//Knight Test
TEST(AttDefTest, KnightBasicAttack1) {
    Human humanTest;
    Knight* knightTest = new Knight("name");
    humanTest.Defence(knightTest->Attack());
	EXPECT_EQ(humanTest.getHealth(), 75.5);
}

TEST(AttDefTest, KnightBasicAttack2) {
    Demon demonTest;
    Knight* knightTest = new Knight("name");
    demonTest.Defence(knightTest->Attack());
	EXPECT_EQ(demonTest.getHealth(), 85.3);
}

TEST(AttDefTest, KnightAbility1) {
    Knight* knightTest = new Knight("name");
    Ability* knightAbilTest = new knightAbility();
    double usedAbility = knightAbilTest->specialAbility(knightTest->getArmor(), knightTest->getHealth(), knightTest->getAttackDamage());
	knightTest->setArmor(usedAbility);
    EXPECT_EQ(knightTest->getArmor(), 60);
}

TEST(AttDefTest, KnightAbility2) {
    Knight* knightTest = new Knight("name");
    Ability* knightAbilTest = new knightAbility();
    knightTest->setArmor(12);
    double usedAbility = knightAbilTest->specialAbility(knightTest->getArmor(), knightTest->getHealth(), knightTest->getAttackDamage());
	knightTest->setArmor(usedAbility);
    EXPECT_EQ(knightTest->getArmor(), 24);
}

//Archer Test
TEST(AttDefTest, ArcherBasicAttack1) {
    Human humanTest;
    Archer* archerTest = new Archer("name");
    humanTest.Defence(archerTest->Attack());
	EXPECT_EQ(humanTest.getHealth(), 70);
}

TEST(AttDefTest, ArcherBasicAttack2) {
    Demon demonTest;
    Archer* archerTest = new Archer("name");
    demonTest.Defence(archerTest->Attack());
	EXPECT_EQ(demonTest.getHealth(), 82);
}

TEST(AttDefTest, ArcherAbility1) {
    Human humanTest;
    Archer* archerTest = new Archer("name");
    Ability* archerAbilTest = new archerAbility();
    humanTest.Defence(archerAbilTest->specialAbility(archerTest->getArmor(), archerTest->getHealth(), archerTest->getAttackDamage()));
	EXPECT_EQ(humanTest.getHealth(), 40);
}

TEST(AttDefTest, ArcherAbility2) {
    Demon demonTest;
    Archer* archerTest = new Archer("name");
    Ability* archerAbilTest = new archerAbility();
    demonTest.Defence(archerAbilTest->specialAbility(archerTest->getArmor(), archerTest->getHealth(), archerTest->getAttackDamage()));
	EXPECT_EQ(demonTest.getHealth(), 64);
}

#endif