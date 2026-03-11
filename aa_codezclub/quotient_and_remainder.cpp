#include <iostream>
#include <ostream>
#include "utils.h"

int main() {
  std::string in1, in2;
  std::cout << "Please enter two numbers" << std::endl;
  std::cin >> in1;
  std::cin >> in2;

  if (!is_number(in1) || !is_number(in2)) {
    std::cout << "Please enter valid numbers!" << std::endl;
    return 1;
  }
  int number1 = atoi(in1.c_str());
  int number2 = atoi(in2.c_str());

  std::cout << "Quotient is " << number1 / number2 << std::endl;
  std::cout << "Remainder is " << number1 % number2 << std::endl;

}
