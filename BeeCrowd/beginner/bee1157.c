// Divisors 1
#include <stdio.h>
int main(void) {
  int n;
  int divisor;
  scanf("%d", &n);

  for (divisor = 1; divisor <= n; divisor++) {
    if (n % divisor == 0) {
      printf("%d\n", divisor);
    }
  }
  return 0;
}