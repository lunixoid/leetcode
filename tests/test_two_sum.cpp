#include "solutions.hpp"
#include <gtest/gtest.h>

TEST(two_sum, positive) {
  std::vector<int> testing_set1 = {2, 7, 11, 15};
  auto result = SLN::twoSum(testing_set1, 9);
  EXPECT_EQ(result.size(), 2);
  EXPECT_EQ(result[0], 0);
  EXPECT_EQ(result[1], 1);

  std::vector<int> testing_set2 = {3, 2, 4};
  result = SLN::twoSum(testing_set2, 6);
  EXPECT_EQ(result.size(), 2);
  EXPECT_EQ(result[0], 1);
  EXPECT_EQ(result[1], 2);

  std::vector<int> testing_set3 = {3, 3};
  result = SLN::twoSum(testing_set3, 6);
  EXPECT_EQ(result.size(), 2);
  EXPECT_EQ(result[0], 0);
  EXPECT_EQ(result[1], 1);
}
