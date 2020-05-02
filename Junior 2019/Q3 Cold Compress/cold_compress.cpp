/*
CCC Junior 2019
Problem J3: Cold Compress
*/

#include <iostream>

int main() {

  int lines;
  std::string symbol, input, output = "";

  std::cin >> lines;

  for (int i = 0; i < lines; i++) {

    std::cin >> input;
    input += " ";
    int count = 1;

    for (int j = 0; j < input.length() - 1; j++) {
      if (input.at(j) == input.at(j + 1)) {
        count++;
      } else {
        output += std::to_string(count) + " " + input.at(j) + " ";
        count = 1;
      }
    }

    output += "\n";

  }

  std::cout << output;

}
