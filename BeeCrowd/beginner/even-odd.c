// BeeCrowd #1074
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int N, X;
  scanf("%d", &N);
  int i = 1;
  while (i <= N) {
    scanf("%d", &X);
    if (X == 0) {
      printf("NULL\n");
    } else if (X > 0) {
      if (X % 2 == 0) {
        printf("EVEN POSITIVE\n");
      } else {
        printf("ODD POSITIVE\n");
      }
    } else /*if (X<0)*/ {
      if (X % 2 == 0) {
        printf("EVEN NEGATIVE\n");
      } else {
        printf("ODD NEGATIVE\n");
      }
    }
    i++;
  }
  return 0;
}