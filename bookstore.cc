#include <iostream>
#include "./GCC_4_7_0/1/Sales_item.h"

int main() {
  Sales_item total, tran;
  if (std::cin >> total) {
    while (std::cin >> tran) {
      if (total.isbn() == tran.isbn()) {
        total += tran;
      } else {
        std::cout << total << std::endl;
        total = tran;
      }
    }
    std::cout << total << std::endl;
  }
  return 0;
}
