#include <gtest/gtest.h>
#include "../main/main.h"

TEST(tests, BasicStruct){
  Pessoa p1;
  p1.idade = 5.5;

  EXPECT_TRUE(p1.idade == 5.5) << "Erro: idade não é do tipo int";
}

// Demonstrate some basic assertions.
TEST(tests, BasicAssertions) {
  // Expect two strings not to be equal.
  EXPECT_STRNE("hello", "world");
  // Expect equality.
  EXPECT_EQ(7 * 6, 42);
}