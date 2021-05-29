#ifndef __factory_hpp__
#define __factory_hpp__

#include "gtest/gtest.h"
#include "../header/AbstractFactory.hpp"
#include <string>

using namespace std;

TEST(FactoryTest, CreateMageCharacter) {
	AbstractFactory* Factory = new MageFactory;
	Character* character = Factory->CreateCharacter("Zamir");
	Ability* ability = Factory->CreateAbility();
	EXPECT_EQ(character->getType(), "Mage");
	EXPECT_EQ(ability->getType(), "Mage");
}

TEST(FactoryTest, CreateKnightCharacter) {
	AbstractFactory* Factory = new KnightFactory;
	Character* character = Factory->CreateCharacter("Zamir");
	Ability* ability = Factory->CreateAbility();
	EXPECT_EQ(character->getType(), "Knight");
	EXPECT_EQ(ability->getType(), "Knight");
}

TEST(FactoryTest, CreateArcherCharacter) {
	AbstractFactory* Factory = new ArcherFactory;
	Character* character = Factory->CreateCharacter("Zamir");
	Ability* ability = Factory->CreateAbility();
	EXPECT_EQ(character->getType(), "Archer");
	EXPECT_EQ(ability->getType(), "Archer");
}




#endif
