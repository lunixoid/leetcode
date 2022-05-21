#include "solutions.hpp"
#include <map>

bool SLN::containsDuplicate(std::vector<int> &nums) {
  std::map<int, bool> buffer;
  for (auto num : nums) {
    if (buffer.find(num) != buffer.end()) {
      return true;
    } else {
      buffer[num] = false;
    }
  }
  return false;
}
