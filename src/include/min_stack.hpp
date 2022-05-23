#include <bits/stdc++.h>
#include <stack>

namespace SLN {
class MinStack {
public:
  void push(int val) {
    mBank.push(val);
    if (getMin() >= val) {
      mMinBank.push(val);
    }
  }

  void pop() {
    if (getMin() == mBank.top()) {
      mMinBank.pop();
    }
    mBank.pop();
  }

  int top() { return mBank.top(); }

  int getMin() {
    if (mMinBank.empty()) {
      return INT_MAX;
    }
    return mMinBank.top();
  }

private:
  std::stack<int> mBank;
  std::stack<int> mMinBank;
};
} // namespace SLN
