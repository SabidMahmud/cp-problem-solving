// Bhaskara's Formula
#include <stdio.h>
#include <math.h>

int main(void) {
  double A, B, C;
  scanf("%lf %lf %lf", &A, &B, &C);
  double d = (B*B)-(4*A*C);
  double R1, R2;  
  if (d >= 0 && A!=0) {
    R1 = (-B + sqrt(d))/(2*A); 
    printf("R1 = %.5lf\n", R1);
    R2 = (-B-sqrt(d))/(2*A);
    printf("R2 = %.5lf\n", R2);
  } else {
    printf("Impossivel calcular\n");
  }
  return 0;
}
