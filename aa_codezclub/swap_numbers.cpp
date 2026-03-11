#include <iostream>

int main() {
  int a, b;
  std::cout << "please enter two numbers for swapping" << std::endl;
  std::cin >> a >> b;
  std::cout << "The numbers are " << a << ", " << b << std::endl;

  a += b;
  b = a - b;
  a = a - b;

  std::cout << "Swapped numbers are " << a << ", "<< b << std::endl;

  return 0;
}
