#include "solutions.hpp"
#include <gtest/gtest.h>

TEST(contains_duplicate, positive) {
  std::vector<int> testing_set1 = {1, 2, 3, 1};
  std::vector<int> testing_set2 = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};
  EXPECT_TRUE(SLN::containsDuplicate(testing_set1));
  EXPECT_TRUE(SLN::containsDuplicate(testing_set2));
}

TEST(contains_duplicate, negative) {
  std::vector<int> testing_set = {1, 2, 3, 4};
  EXPECT_FALSE(SLN::containsDuplicate(testing_set));
}
