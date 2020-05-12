#include <iostream>
#include <string>
#include <vector>

// e10.14
auto sumTwo = [](int a, int b) -> int {
  return a + b;
};

int main() {
  std::cout << "write a lambda" << std::endl;
  // e10.15
  std::vector<int> nums = {1, 3, 5, 9, 11};
  const int extra = 20;
  for_each(nums.begin(), nums.end(), [&extra](int value) -> void {
      int sum =  value + extra;
      std::cout << sum << std::endl;
  });

  return 0;
}
