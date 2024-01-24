#include <gtest/gtest.h>
#include "../main/main.c"

TEST(StructTest, IdadeInt){
  Pessoa p1;
  p1.idade = 5;

  ASSERT_THAT(5, p1.idade);
}

// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions) {
  // Expect two strings not to be equal.
  EXPECT_STRNE("hello", "world");
  // Expect equality.
  EXPECT_EQ(7 * 6, 42);
}