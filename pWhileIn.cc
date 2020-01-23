#include <iostream>

int main() {
  int sum = 0, value = 0;
  while (std::cin >> value)
    sum += value;
  std::cout << "result is " << sum << std::endl;
  return 0;
}
