#include <cstdio>
#include <cstring>
#include <stdexcept>

bool check_bounds(const char* array, const int index)
{
  if (const size_t array_len = strlen(array); index < 0 || index >= array_len)
  {
    throw std::invalid_argument(index < 0 ? "Neative index is not allowed" : "Index out of bounds");
  }
  return true;
}


char read_from(const char *array, const int index)
{
  check_bounds(array, index);
  return array[index];
}

void write_to(char *array, const int index, const char value)
{
  check_bounds(array, index);
  array[index] = value;
}

int main() {
  char lower[] = "abc?e";
  char upper[] = "ABC?E";
  char* upper_ptr = upper; // Equivalent: &upper[0]

  lower[3] = 'd'; // lower now contains a b c d e \0
  upper_ptr[3] = 'D'; // upper now contains A B C D E \0

  char letter_d = read_from(lower, 3); // letter_d equals 'd'
  char letter_D = read_from(upper, 3); // letter_D equals 'D'

  printf("lower: %s\nupper: %s", lower, upper);

  write_to(lower, 7, 'g'); // Super bad. You must never do this.

}
