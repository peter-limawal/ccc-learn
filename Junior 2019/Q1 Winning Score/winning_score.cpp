/*
CCC Junior 2019
Problem J1: Winning Score
*/

#include <iostream>

int main() {

  int threeA, twoA, oneA, threeB, twoB, oneB, sumA, sumB;

  std::cin >> threeA;
  std::cin >> twoA;
  std::cin >> oneA;
  std::cin >> threeB;
  std::cin >> twoB;
  std::cin >> oneB;

  threeA *= 3;
  threeB *= 3;

  twoA *= 2;
  twoB *= 2;

  sumA = threeA + twoA + oneA;
  sumB = threeB + twoB + oneB;

  if (sumA == sumB) {
    std::cout << "T";
  } else if (sumA > sumB) {
    std::cout << "A";
  } else {
    std::cout << "B";
  }

}
