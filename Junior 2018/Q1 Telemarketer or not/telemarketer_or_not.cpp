/*
CCC Junior 2018
Problem J1: Telemarketer or not?
*/

#include <iostream>

int main() {

  int one, two, three, four;
  std::cin >> one;
  std::cin >> two;
  std::cin >> three;
  std::cin >> four;

  if ((one == 8 || one == 9) && (four == 8 || four == 9) && (two == three)) {
    std::cout << "ignore\n";
  } else {
    std::cout << "answer\n";
  }

}
