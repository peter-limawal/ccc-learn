/*
CCC Junior 2020
Problem J1: Dog Treats
*/

#include <iostream>

int main() {

  int s, m, l, total;

  std::cin >> s;
  std::cin >> m;
  std::cin >> l;

  total = (1 * s) + (2 * m) + (3 * l);

  if (total >= 10) {
    std::cout << "happy\n";
  } else {
    std::cout << "sad\n";
  }

}
