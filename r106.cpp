#include <iostream>

int main() {
  [[maybe_unused]] int x {5};

  int y {};

  std::cout << y << '\n';

  return 0;
}
