// BeeCrowd #1096
#include <stdio.h>

int main(void) {
  int I, J;
  I = 1;
  while (I <= 9) {
    J = 7;
    printf("I=%d J=%d\n", I, J);
    J -= 1;
    printf("I=%d J=%d\n", I, J);
    J -= 1;
    printf("I=%d J=%d\n", I, J);
    I = I + 2;
  }
  return 0;
}