/*
CCC Junior 2019
Problem J2: Time to Decompress
*/

#include <iostream>

int main() {

  int lines, number;
  std::string symbol, input, output = "";

  std::cin >> lines;

  for (int i = 0; i < lines; i++) {

    std::cin >> input;
    number = std::stoi(input);

    std::cin >> symbol;

    for (int j = 0; j < number; j++) {
      output += symbol;
    }
    output += "\n";

  }

  std::cout << output;

}
