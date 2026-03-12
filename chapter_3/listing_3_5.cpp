#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

struct College {
  char name[256];
};

void print_names(College* colleges, size_t n_colleges) {
  for(size_t i = 0; i < n_colleges; i++) {
    printf("%s College\n", colleges[i].name);
  }
}

void improved_print_names(vector<College>& colleges) {
  for (const auto& college : colleges) {
    cout << college.name << " College, improved" << endl;
  }
}

int main() {
  College oxford[] = { "Magdalen", "Nuffield", "Kellogg" };
  vector<College> colleges = { {"Magdalen"}, {"Nuffield"}, {"Kellogg"} };
  print_names(oxford, sizeof(oxford) / sizeof(College));
  improved_print_names(colleges);
}
