#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;

int main() {
  vector<string> results;
  for (string str; std::cin >> str; results.push_back(str)) {
    if (results.size() > 8) {
      for (string result : results) {
        std::cout << result << " ";
      }
      std::cout << std::endl;
      results.clear();
    }
  }
  return 0;
}
