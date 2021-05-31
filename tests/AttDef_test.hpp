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
    Human humanTest;
    Mage* mageTest = new Mage("name");
    Ability* mageAbilTest = new mageAbility();
    humanTest.Defence(mageAbilTest->specialAbility(mageTest->getArmor(), mageTest->getHealth(), mageTest->getAttackDamage()));
	EXPECT_EQ(humanTest.getHealth(), 70);
}

TEST(AttDefTest, MageAbility2) {
    Demon demonTest;
    Mage* mageTest = new Mage("name");
    Ability* mageAbilTest = new mageAbility();
    demonTest.Defence(mageAbilTest->specialAbility(mageTest->getArmor(), mageTest->getHealth(), mageTest->getAttackDamage()));
	EXPECT_EQ(demonTest.getHealth(), 82);
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
	EXPECT_EQ(demonTest.getHealth(), 65.7);
}

TEST(AttDefTest, KnightAbility1) {
    Human humanTest;
    Knight* knightTest = new Knight("name");
    Ability* knightAbilTest = new knightAbility();
    humanTest.Defence(knightAbilTest->specialAbility(knightTest->getArmor(), knightTest->getHealth(), knightTest->getAttackDamage()));
	EXPECT_EQ(humanTest.getHealth(), 75.5);
}

TEST(AttDefTest, KnightAbility2) {
    Demon demonTest;
    Knight* knightTest = new Knight("name");
    Ability* knightAbilTest = new knightAbility();
    demonTest.Defence(knightAbilTest->specialAbility(knightTest->getArmor(), knightTest->getHealth(), knightTest->getAttackDamage()));
	EXPECT_EQ(demonTest.getHealth(), 85.3);
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

TEST(AttDefTest, ArcherAbility1) {
    Demon demonTest;
    Archer* archerTest = new Archer("name");
    Ability* archerAbilTest = new archerAbility();
    demonTest.Defence(archerAbilTest->specialAbility(archerTest->getArmor(), archerTest->getHealth(), archerTest->getAttackDamage()));
	EXPECT_EQ(demonTest.getHealth(), 64);
}

#endif