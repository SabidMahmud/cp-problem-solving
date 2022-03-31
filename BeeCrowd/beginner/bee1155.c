// bee 1155 // S Sequece
#include <stdio.h>

int main(void) {
  float s = 0;
  for (int i = 1; i <= 100; i++) {
    s += 1.00 / (float)i;
  }
  printf("%.2f\n", s);
  return 0;
}
