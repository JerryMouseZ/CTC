#include "generator.h"
#include <coroutine>
#include <iostream>
Generator<char> expolode(const std::string &s) {
  for (char ch : s) {
    co_yield ch;
  }
}

int main() {
  for (char ch : expolode("hello")) {
    std::cout << ch << std::endl;
  }
  return 0;
}
