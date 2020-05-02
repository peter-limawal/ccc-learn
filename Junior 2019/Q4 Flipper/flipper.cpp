/*
CCC Junior 2019
Problem J4: Flipper
*/

#include <iostream>

int main() {

  std::string a1 = "1", b1 = "2", a2 = "3", b2 = "4", plc, input;

  std::cin >> input;

  for (int i = 0; i < input.length(); i++) {
    if (input.at(i) == 'H') {
      plc = a1;
      a1 = a2;
      a2 = plc;
      plc = b1;
      b1 = b2;
      b2 = plc;
    } else if (input.at(i) == 'V') {
      plc = a1;
      a1 = b1;
      b1 = plc;
      plc = a2;
      a2 = b2;
      b2 = plc;
    }
  }

  std::cout << a1 << " " << b1 << "\n";
  std::cout << a2 << " " << b2 << "\n";

}
