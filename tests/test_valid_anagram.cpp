#include "solutions.hpp"
#include <gtest/gtest.h>

TEST(valid_anagram, positive) {
    EXPECT_TRUE(SLN::isAnagram("anagram", "nagaram"));
}

TEST(valid_anagram, negative) {
    EXPECT_FALSE(SLN::isAnagram("rat", "car"));
}
