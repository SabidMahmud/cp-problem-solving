// BeeCrowd #1095
#include <stdio.h>
int main(void) {
  int I, J = 60;
  I = -2;
  while (J >= 0) {
    I = I + 3;
    printf("I=%d J=%d\n", I, J);
    J = J - 5;
  }
  return 0;
}