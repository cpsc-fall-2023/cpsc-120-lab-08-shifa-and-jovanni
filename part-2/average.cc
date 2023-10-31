// Jovanni Trujillo
// doctorjovas@csu.fullerton.edu
// @waterjio
// Partners: @emilytantu

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  if (arguments.size() < 2) {
    std::cout << "error: you must supply at least one number";
    return 1;
  }
  double sum{0.0};

  for (const auto& arg : arguments) {
    if (arg != arguments[0]) {
      sum += std::stod(arg);
    }
  }

  double average{sum / (--argc)};
  std::cout << "average = " << average;

  return 0;
}
