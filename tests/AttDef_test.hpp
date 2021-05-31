#ifndef __attackDefence_test_hpp__
#define __attackDefence_test_hpp__

#include "gtest/gtest.h"
#include "../header/AbstractFactory.hpp"
#include "../header/human.hpp"
#include "../header/demon.hpp"

TEST(AttDefTest, addHealthFnc) {
    Human humanTest;
    Mage* mageTest = new Mage("name");
    humanTest.Defence(mageTest->Attack());
	EXPECT_EQ(humanTest.getHealth(), 66);
}


#endif