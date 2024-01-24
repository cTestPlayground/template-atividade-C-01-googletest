#include <gtest/gtest.h>
#include "../main/main.h"

TEST(tests, BasicoIdadeInt){
  Pessoa p1;
  p1.idade = 5.5;

  EXPECT_TRUE(p1.idade == 5) << "Erro: idade não é do tipo int";
}

TEST(tests, BasicoAlturaFloat){
  Pessoa p1;
  p1.altura = 1.8;

  EXPECT_FLOAT_EQ(1.5, p1.altura) << "Erro: altura não é do tipo float";
}

TEST(tests, BasicoSoma){
  EXPECT_TRUE(2 == soma(1, 1)) << "Erro: idade não é do tipo int";
}

// Demonstrate some basic assertions.
TEST(tests, BasicAssertions) {
  // Expect two strings not to be equal.
  EXPECT_STRNE("hello", "world");
  // Expect equality.
  EXPECT_EQ(7 * 6, 42);
}