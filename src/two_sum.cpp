/*
 * Description: https://leetcode.com/problems/two-sum
 * */
#include "solutions.hpp"
#include <map>

std::vector<int> SLN::twoSum(std::vector<int> &nums, int target) {
  std::map<unsigned int, int> buf;
  for (int i = 0; i < nums.size(); i++) {
    auto diff = target - nums[i];
    if (buf.find(diff) != buf.end()) {
      return {buf[diff], i};
    }
    buf[nums[i]] = i;
  }
  return {};
}
