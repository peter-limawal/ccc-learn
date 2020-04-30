/*
CCC Junior 2020
Problem J3: Art
*/

#include <iostream>

int main() {

  int loop, newX, newY, coorXMax = 0, coorYMax = 0, coorXMin = 101, coorYMin = 101;
  std::string coordinates;

  std::cin >> loop;

  for (int i = 0; i < loop; i++) {
    std::cin >> coordinates;
    for (int j = 0; j < coordinates.size(); j++) {
      if (coordinates.at(j) == ',') {
        newX = std::stoi(coordinates.substr(0, j + 1));
        newY = std::stoi(coordinates.substr(j + 1));
        break;
      }
    }
    if (newX > coorXMax) {
      coorXMax = newX;
    }
    if (newY > coorYMax) {
      coorYMax = newY;
    }
    if (newX < coorXMin) {
      coorXMin = newX;
    }
    if (newY < coorYMin) {
      coorYMin = newY;
    }
  }

  std::cout << coorXMin - 1 << "," << coorYMin - 1 << "\n";
  std::cout << coorXMax + 1 << "," << coorYMax + 1 << "\n";

}
