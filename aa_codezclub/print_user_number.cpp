#include <iostream>
#include "utils.h"


int main() {
  std::string input;
  std::cout << "Please pass a number \n";
  std::cin >> input;
  if(is_number(input)) {
    std::cout << "Number is " << input << std::endl;
  } else {
    std::cout << "Your input is not a number! " << input << std::endl;
  }
  return 0;
}
