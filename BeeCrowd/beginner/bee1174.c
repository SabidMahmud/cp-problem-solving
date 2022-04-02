// Array Selection 1
// https://www.beecrowd.com.br/judge/en/problems/view/1174
#include <stdio.h>
int main(void) {
  int n = 100;
  float A[n];

  for (int i = 0; i < n; i++) {
    scanf("%f", &A[i]);
  }

  for (int j = 0; j < n; j++) {
    if (A[j] <= 10) {
      printf("A[%d] = %.1f\n", j, A[j]);
    }
  }
  return 0;
}