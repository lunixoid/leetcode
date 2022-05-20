/*
 * Description: https://leetcode.com/problems/valid-parentheses/
 * */
#include "solutions.hpp"
#include <iostream>
#include <map>
#include <stack>

bool SLN::isValidParentheses(std::string s) {
  std::stack<char> buffer;
  std::map<char, char> closeToOpen = {{')', '('}, {'}', '{'}, {']', '['}};

  for (auto p : s) {
    if (closeToOpen.find(p) == closeToOpen.end()) {
      if (!buffer.empty() && buffer.top() == closeToOpen[p]) {
        buffer.pop();
      } else {
        return false;
      }
    } else {
      buffer.push(p);
    }
  }
  return buffer.empty();
}
