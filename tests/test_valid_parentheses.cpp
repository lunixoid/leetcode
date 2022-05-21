#include "solutions.hpp"
#include <gtest/gtest.h>

TEST(valid_parentheses, positive) {
  EXPECT_TRUE(SLN::isValidParentheses("()"));
  EXPECT_TRUE(SLN::isValidParentheses("()[]{}"));
  EXPECT_TRUE(SLN::isValidParentheses("((()))"));
}

TEST(valid_parentheses, negative) {
  EXPECT_FALSE(SLN::isValidParentheses("(]"));
  EXPECT_FALSE(SLN::isValidParentheses("((())"));
}
