// Find, wheather a number is a prime number or not
#include <stdio.h>
int main(void) {
  int test_case;
  int input, j;
  scanf("%d", &test_case);
  int prime;
  for (int i = 1; i <= test_case; i++) {
    scanf("%d", &input);
    prime = 0;
    for (j = 2; j <= input / 2; j++) {
      if (input % j == 0) {
        prime = 1;
        break;
      }
    }
    if (input < 2) {
      prime = 1;
    }
    if (prime == 0) {
      printf("%d eh primo\n", input);
    } else {
      printf("%d nao eh primo\n", input);
    }
  }
  return 0;
}