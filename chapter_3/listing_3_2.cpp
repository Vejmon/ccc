#include <cstdio>

int main() {
  int gettysburg{};
  int* gettysburg_address = &gettysburg;
  printf("Value at gettysburg_address: %d\n", *gettysburg_address);
  printf("Gettysburg Address: %p\n", gettysburg_address);
  *gettysburg_address = 17326;
  printf("Value at gettysburg_address: %d\n", *gettysburg_address);
  printf("Gettysburg Address: %p\n", gettysburg_address);
  gettysburg = 123;
  printf("Value at gettysburg_address: %d\n", *gettysburg_address);
  printf("Gettysburg Address: %p\n", gettysburg_address);
}
