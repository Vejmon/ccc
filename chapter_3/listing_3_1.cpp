#include <cstdio>

int main() {
  int gettysburg{3};
  printf("gettysburg: %d\n", gettysburg);
  int* gettysburg_address = &gettysburg;
  printf("&gettysburg: %p\n", gettysburg_address);
  int gettysb_dereferenced{*gettysburg_address};
  printf("gettysb_dereferenced: %d\n", gettysb_dereferenced);
}
