// BeeCrowd #1098
#include <stdio.h>

int main(void) {
  double I, J;
  I = 0;
  J = 1;
  while (I <= 2) {
    printf("I=%g J=%g\n", I, J);
    J++;
    printf("I=%g J=%g\n", I, J);
    J++;
    printf("I=%g J=%g\n", I, J);
    I += 0.2;
    J -= 1.8;
  }
  /* for (I = 0; I <= 2; I = I + 0.2) {
     printf("I=%g J=%g\n", I, J);
     J++;
     printf("I=%g J=%g\n", I, J);
     J++;
     printf("I=%g J=%g\n", I, J);
     J -= 1.8;
   } */
  return 0;
}
