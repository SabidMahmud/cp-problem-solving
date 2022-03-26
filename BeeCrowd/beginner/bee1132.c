// BeeCrowd 1132 # Sum of the multiples of 13
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int X, Y, sum = 0;
  scanf("%d %d", &X, &Y);
  if (X <= Y) {
    for (int i = X; i <= Y; i++) {
      if (i % 13 != 0) {
        sum += i;
      }
    }
  } else {
    for (int i = X; i >= Y; i--) {
      if (i % 13 != 0) {
        sum += i;
      }
    }
  }
  printf("%d\n", sum);
  return 0;
}
