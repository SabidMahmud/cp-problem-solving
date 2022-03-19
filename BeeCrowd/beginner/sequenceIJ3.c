// BEECROWD #1097
#include <stdio.h>
int main(void) {
  int I, J;
  I = 1;
  J = 7;
  while (I <= 9) {
    printf("I=%d J=%d\n", I, J);
    J--;
    printf("I=%d J=%d\n", I, J);
    J--;
    printf("I=%d J=%d\n", I, J);
    J += 4;
    I += 2;
  }
  return 0;
}