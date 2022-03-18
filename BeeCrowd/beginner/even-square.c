// BEECROWD #1073
// Calculate the square of the even numbers
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int main(void) {
  int N;
  scanf("%d", &N);
  long int sum;
  int i = 1;
  while (i <= N) {
    if (i % 2 == 0) {
      sum = pow(i, 2);
      printf("%d^2 = %ld\n", i, sum);
    }
    i++;
  }
  return 0;
}