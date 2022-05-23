#include "solutions.hpp"
#include <gtest/gtest.h>

TEST(min_stack, positive) {
  SLN::MinStack minStack;
  minStack.push(-2);
  minStack.push(0);
  minStack.push(-3);
  EXPECT_EQ(minStack.getMin(), -3);
  minStack.pop();
  EXPECT_EQ(minStack.top(), 0);
  EXPECT_EQ(minStack.getMin(), -2);
}
