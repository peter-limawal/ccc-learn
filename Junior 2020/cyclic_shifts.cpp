/*
CCC Junior 2020
Problem J4: Cyclic Shifts
*/

#include <iostream>
#include <vector>

bool checker(std::string s, std::string t);

int main() {

  std::string s, t;

  std::cin >> t;
  std::cin >> s;

  if (checker(t, s)) {
    std::cout << "yes\n";
  } else {
    std::cout << "no\n";
  }

}

bool checker(std::string t, std::string s) {

  std::vector<std::string> config;
  std::string plc;

  for (int i = 0; i < s.size(); i++) {
    plc = s.substr(1) + s.at(0);
    config.push_back(plc);
    s = plc;
  }

  for (int j = 0; j < t.size() - s.size() + 1; j++) {
    for (int k = 0; k < config.size(); k++) {
      if (t.substr(j, s.size()).compare(config.at(k)) == 0){
        return true;
      }
    }
  }

  return false;

}
