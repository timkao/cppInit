// ifstream and ofstream
#include <string>
#include <vector>
#include <fstream>
#include <iostream>

void process(std::ifstream &is, std::vector<std::string> &lines)
{
	std::string s;
	while (std::getline(is, s))
		lines.push_back(s);
}

int main() {
  std::vector<std::string> lines;
  std::ifstream in("./fakesource/resE821.txt");
  process(in, lines);
  for (auto line : lines) {
    std::cout << line << std::endl;
  }
  return 0;
}
