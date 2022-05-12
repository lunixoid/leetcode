/*
 * Description: https://leetcode.com/problems/valid-palindrome
 * */
#include <algorithm>
#include <functional>
#include <iostream>
#include <string>

bool isPalindrome(std::string s) {
  if (s.size() == 1) {
    return true;
  }
  s.erase(
      std::remove_if(s.begin(), s.end(),
                     [](auto const &c) -> bool { return !std::isalnum(c); }),
      s.end());
  std::transform(s.begin(), s.end(), s.begin(),
                 [](unsigned char c) { return std::tolower(c); });
  auto size{s.size()};
  if (size <= 1) {
    return true;
  }
  size_t l{0};
  size_t r{s.size() - 1};
  while (l < r) {
    if (s[l] != s[r]) {
      return false;
    }
    l++;
    r--;
  }
  return true;
}

int main() {
  std::cout << isPalindrome("A man, a plan, a canal: Panama") << std::endl;
  std::cout << isPalindrome(" ") << std::endl;
  std::cout << isPalindrome(".,") << std::endl;
  return 0;
}
