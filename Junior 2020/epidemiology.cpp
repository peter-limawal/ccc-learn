/*
CCC Junior 2020
Problem J2: Epidemiology
*/

#include <iostream>

int main() {

  int p, n, r, total, count = 0;

  std::cin >> p;
  std::cin >> n;
  std::cin >> r;

  total = n;

  while (total <= p) {
    n *= r;
    total += n;
    count++;
  }

  std::cout << count;

}
