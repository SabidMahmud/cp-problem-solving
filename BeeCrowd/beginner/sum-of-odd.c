// BeeCrowd #1071
// Calculate the sum of consecutive odd numbers 1;
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int X, Y;
  scanf("%d %d", &X, &Y);

  if (X >= Y) {
    int i, sum = 0;
    for (i = (X - 1); i > Y; i--) {
      if (i % 2 != 0) {
        sum += i;
      }
    }
    printf("%d\n", sum);
  } else {
    int i, sum = 0;
    for (i = (Y - 1); i > X; i--) {
      if (i % 2 != 0) {
        sum += i;
      }
    }
    printf("%d\n", sum);
  }
  return 0;
}