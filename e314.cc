#include <iostream>
#include <vector>

int main() {
  std::vector<int> vec;
  for (int i; std::cin >> i && vec.size() < 5; vec.push_back(i));
  for (auto num : vec) {
    std::cout << num << std::endl;
  }
  return 0;
}
