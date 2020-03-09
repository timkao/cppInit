#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

int main() {
  string s1 = "This is a test string";
  string *p = &s1;
  auto size = s1.size();
  cout << "The object itself has size: " << s1.size() << endl;
  cout << "The dereference operator to the object works: " << (*p).size() << endl;
  cout << "The member access operator also works: " << p->size() << endl;
  return 0;
}
