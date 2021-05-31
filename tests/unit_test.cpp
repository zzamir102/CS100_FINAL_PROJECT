#include "gtest/gtest.h"
#include "factory_test.hpp"
#include "character_test.hpp"
#include "ability_test.hpp"
#include "enemy_test.hpp"

using namespace std;

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

