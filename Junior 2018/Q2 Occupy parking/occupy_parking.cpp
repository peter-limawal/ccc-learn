/*
CCC Junior 2019
Problem J2: Occupy parking
*/

#include <iostream>

int main() {

  int spaces, count = 0;
  std::string yesterday, today;

  std::cin >> spaces;
  std::cin >> yesterday;
  std::cin >> today;

  for (int i = 0; i < spaces; i++) {
    if (yesterday.at(i) == 'C' && today.at(i) == 'C') {
      count++;
    }
  }

  std::cout << count;

}
