#include <vector>
#include <iostream>

using std::cout;
using std::cin;
using std::vector;

int main() {
  vector<int> nums{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  for (int i = 1; i < nums.size(); ++i) {
    const int sum = nums[i] + nums[i - 1];
    cout << sum << std::endl;
  }
  return 0;
}
