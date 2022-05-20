#include "solutions.hpp"
#include <gtest/gtest.h>

TEST(valid_parentheses, positive) {
    EXPECT_TRUE(SLN::isPalindrome("()"));
    EXPECT_TRUE(SLN::isPalindrome("()[]{}"));
    EXPECT_TRUE(SLN::isPalindrome("((()))"));
}

TEST(valid_parentheses, negative) {
    EXPECT_FALSE(SLN::isPalindrome("(]"));
    EXPECT_FALSE(SLN::isPalindrome("((())"));
}
