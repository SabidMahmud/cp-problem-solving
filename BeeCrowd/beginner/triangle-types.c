// BeeCrowd #1045
// Determine the types of triangle

#include <stdio.h>

int main(void) {
  double A, B, C;
  scanf("%lf %lf %lf", &A, &B, &C);
  if (A >= (B + C) || B >= (A + C) || C >= (A + B)) {
    printf("NAO FORMA TRIANGULO\n");
  } else if (A * A == (B * B + C * C) || B * B == (A * A + C * C) ||
            (C * C) == (A * A + B * B)) {
    printf("TRIANGULO RETANGULO\n");
  } else if ((A * A) > (B * B + C * C) || (B * B) > (A * A + C * C) ||
            (C * C) > (A * A + B * B)) {
    printf("TRIANGULO OBTUSANGULO\n");
  } else if ((A * A) < (B * B) + (C * C) || (B * B) < (A * A) + (C * C) ||
            (C * C) < (A * A) + (B * B)) {
    printf("TRIANGULO ACUTANGULO\n");
  }
  if (A == B && A == C) {
    printf("TRIANGULO EQUILATERO\n");
  }
  if (A == B && B != C || B == C && C != A || A == C && A != B) {
    printf("TRIANGULO ISOSCELES\n");
  }
  return 0;
}
