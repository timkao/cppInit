#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

int main() {
  int i = 18, j = 4;
  double slope = static_cast<double> (i) / j;

  const string test = "Current slope is ";
  const string* cp = &test;
  string* q = const_cast<string*>(cp);
  cout << *q << slope << endl;

  // reinterpret cast is dangerous.
}
