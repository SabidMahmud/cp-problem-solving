// Array Fill III // https://www.beecrowd.com.br/judge/en/problems/view/1178
#include <stdio.h>
int main(void) {
  double X;
  int n = 100;
  double N[n];
  scanf("%lf", &X);
  N[0] = X;
  for (int i = 1; i < n; i++) {
    N[i] = X / 2;
    X = X / 2;
  }
  for (int i = 0; i < n; i++) {
    printf("N[%d] = %.4lf\n", i, N[i]);
  }
  return 0;
}