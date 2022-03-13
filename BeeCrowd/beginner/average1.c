
#include <stdio.h>

int main()
{
  float A,B;
  float wA, wB;
  wA = 3.5;
  wB = 7.5;
  scanf("%f %f", &A, &B);
  double avg = ( (A*wA) + (B*wB) ) / (wA+wB);
  printf("MEDIA = %.5lf\n", avg);
  return 0;
}
