// Bee 1115
// print the position of a point
#include <stdio.h>

int main(void) {
  int X, Y;
  while (scanf("%d %d", &X, &Y)) {
    if (X == 0 || Y == 0) {
      break;
    } else if (X > 0 && Y > 0) {
      printf("primeiro\n");
    } else if (X < 0 && Y > 0) {
      printf("segundo\n");
    } else if (X < 0 && Y < 0) {
      printf("terceiro\n");
    } else {
      printf("quarto\n");
    }
  }
  return 0;
}
