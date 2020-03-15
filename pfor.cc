#include <iostream>
#include <vector>
#include <string>

using std::string;
using std::vector;

int main() {
  vector<string> strs = {"a", "b", "c", "d"};

  for (auto i = strs.begin(); i != strs.end(); ++i) {
    std::cout << i->c_str() << std::endl;
    // print "a", "b", "c", "d"
  }

  for (auto i = strs.begin(); i != strs.end() && i != strs.begin(); ++i) {
    std::cout << i->c_str() << std::endl;
    // print nothing.
  }

  return 0;
}
