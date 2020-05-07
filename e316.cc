#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;

int main() {
  vector<int> vec1{10, 42};
  vector<int> vec2(10);
  vector<int> vec3{10};
  vector<string> vec4{10, "hi"};
  for (auto result : vec1) {
    std::cout << result << std::endl;
  }
  return 0;
}
