// BeeCrowd #1113

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int X, Y;
  while (scanf("%d %d", &X, &Y)) {
    if (X > Y) {
      printf("Decrescente\n");
    } else if (X < Y) {
      printf("Crescente\n");
    } else {
      break;
    }
  }
  return 0;
}
