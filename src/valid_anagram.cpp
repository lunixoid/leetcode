/*
 * Description: https://leetcode.com/problems/valid-anagram
 * */
#include "solutions.hpp"
#include <map>

bool SLN::isAnagram(std::string s, std::string t) {
  if (s.size() != t.size()) {
    return false;
  }
  std::map<size_t, ssize_t> buf;
  for (auto c : s) {
    buf[c]++;
  }
  for (auto c : t) {
    buf[c]--;
    if (buf[c] < 0) {
      return false;
    }
  }
  return true;
}
