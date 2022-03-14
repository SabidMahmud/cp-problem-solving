// BeeCrowd Problem #1043

#include <stdio.h>

int main(void) {
  float A, B, C;
  scanf("%f %f %f", &A, &B, &C);
  if (A >= 0 && B >= 0 && C >= 0) {
    if ((A + B) > C && (B + C) > A && (A + C) > B) {
      float perimetro = (A + B + C);
      printf("Perimetro = %.1f\n", perimetro);
    } else {
      float area = ((A + B) * C) / 2;
      printf("Area = %.1f\n", area);
    }
  }
  return 0;
}
