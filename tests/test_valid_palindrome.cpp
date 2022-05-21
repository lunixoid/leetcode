#include "solutions.hpp"
#include <gtest/gtest.h>

TEST(valid_palindrome, positive) {
  EXPECT_TRUE(SLN::isPalindrome("A man, a plan, a canal: Panama"));
  EXPECT_TRUE(SLN::isPalindrome(" "));
}

TEST(valid_palindrome, negative) {
  EXPECT_FALSE(SLN::isPalindrome("race a car"));
  EXPECT_FALSE(SLN::isPalindrome("123"));
}
