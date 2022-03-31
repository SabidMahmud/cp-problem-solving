// Bee 1156 // S seuqence
#include <stdio.h>
int main(void) {
  float sum = 1;
  int i = 2, j = 2;
  while (i < 40) {
    if (i % 2 != 0) {
      sum += ((float)i / j);
      j = j * 2;
    }
    i++;
  }
  printf("%.2f\n", sum);
  return 0;
}