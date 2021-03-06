#include <iostream>
#include <string>
#include <vector>
#include <numeric>


using std::string;

// e10.14
auto sumTwo = [](int a, int b) -> int {
  return a + b;
};

void elimDups(std::vector<int> &nums) {
  sort(nums.begin(), nums.end());
  auto end_unique = unique(nums.begin(), nums.end());
  nums.erase(end_unique, nums.end());
}

int main() {
  std::cout << "write a lambda" << std::endl;
  // e10.15
  std::vector<int> nums = {5, 3, 11, 9, 11, 22, 5, 8, 1};
  const int extra = 20;
  for_each(nums.begin(), nums.end(), [&extra](int value) -> void {
      int sum =  value + extra;
      std::cout << sum << std::endl;
  });

  // e10.3
  int result = std::accumulate(nums.begin(), nums.end(), 18);
  std::cout << "The result is " << result << std::endl;

  //e10.9
  elimDups(nums);
  for (int newNum : nums) {
    std::cout << "new number is " << newNum << std::endl;
  }

  //e10.11
  std::vector<string> words = {"one", "two", "three", "four", "five"};
  stable_sort(words.begin(), words.end(), [](const string& s1, const string s2) -> bool {
    return s1.size() < s2.size();
  });
  for (string word : words) {
    std::cout << word << std::endl;
  }
  return 0;
}
