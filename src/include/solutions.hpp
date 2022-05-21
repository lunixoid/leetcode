#pragma once
#include <string>
#include <vector>

namespace SLN {
bool containsDuplicate(std::vector<int> &nums);
bool isAnagram(std::string s, std::string t);
std::vector<int> twoSum(std::vector<int> &nums, int target);
bool isPalindrome(std::string s);
bool isValidParentheses(std::string s);
}; // namespace SLN