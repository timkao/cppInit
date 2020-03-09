#include <vector>
#include <iostream>

using std::vector;
using std::cout;
using std::endl;

int main() {
  vector<int> nums = {1, 2, 3, 4, 5};
  for (auto &i : nums) {
    i *= i;
  }
  for (auto i : nums) {
    cout << i << " ";
  }
  cout << endl;
  return 0;
}
