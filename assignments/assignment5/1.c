// Program to find the greatest common divisor of two numbers
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int a, b, gcd;
  scanf("%d %d", &a, &b);
  for (int i = 1; i <= a && i <= b; i++) {
    if (a % i == 0 && b % i == 0) {
      gcd = i;
    }
  }
  printf("%d\n", gcd);
  return 0;
}
