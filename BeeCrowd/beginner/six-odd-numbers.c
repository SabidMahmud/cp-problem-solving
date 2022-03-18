// BeeCrowd #1070
// Odd numbers
#include <stdio.h>
#include <stdlib.h>
int main(void) {
  int x;
  scanf("%d", &x);
  int n = 1;
  while (n <= 6) {
    if (x % 2 != 0) {
      printf("%d\n", x);
      n++;
    }
    x++;
  }
  return 0;
}