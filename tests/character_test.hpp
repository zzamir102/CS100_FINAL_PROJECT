#ifndef __character_test_hpp__
#define __character_test_hpp__

#include "../header/character.hpp"

using namespace std;

TEST(CharacterClass, setNameFnc) {
	Character test;
	test.setName("Zamir");
	EXPECT_EQ(test.getName(), "Zamir");
}

TEST(CharacterClass, addHealthFnc) {
	Character test;
	double _health = test.getHealth();
	test.addHealth(35.5);	
	EXPECT_EQ(test.getHealth(), _health + 35.5);
}

TEST(CharacterClass, addAttackDamageFnc) {
	Character test;
	double _AttackDamage = test.getAttackDamage();
	test.addAttackDamage(52.3);
	EXPECT_EQ(test.getAttackDamage(), _AttackDamage + 52.3);
}

TEST(CharacterClass, addArmorFnc) {
	Character test;
	double _armor = test.getArmor();
	test.addArmor(42.0);
	EXPECT_EQ(test.getArmor(), _armor = 42.0);
}

TEST(CharacterClass, addExperienceFnc) {
	Character test;
	double _exp = test.getExperience();
	test.addExperience(22);
	EXPECT_EQ(test.getExperience(), _exp + 22);
}

TEST(CharacterClass, upgradeFncTrueCase) {
	Character test;
	test.addExperience(100);
	bool upgradeReady = false;
	int _level = test.getLevel();
	upgradeReady = test.upgrade();
	EXPECT_EQ(test.getLevel(), _level + 1);
	EXPECT_EQ(upgradeReady, true);
}

TEST(CharacterClass, DefenceFnc) {
	Character test;
	test.addHealth(80.0);
	test.addArmor(20.0);
	test.Defence(40.0);
	EXPECT_EQ(test.getHealth(), 48.0);
}


#endif

