#include <stdio.h>

int main()
{
  double A,B, C;
  float wA, wB, wC;
  wA = 2;
  wB = 3;
  wC = 5;
  scanf("%lf %lf %lf", &A, &B, &C);
  double avg = ( (A*wA) + (B*wB) + (C*wC) ) / (wA+wB+wC);
  printf("MEDIA = %.1lf\n", avg);
  return 0;
}
