// BeeCrowd 1146
#include <stdio.h>
int main(void) {
  int X;
  int i, N = 1;
  while (scanf("%d", &X)) {
    if (X == 0) {
      break;
    } else {
      printf("1");
      for (i = N + 1; i <= X; i++) {
        printf(" %d", i);
      }
      printf("\n");
    }
  }
  return 0;
}
