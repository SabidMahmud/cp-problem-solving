// Fibonacci Array
// https://www.beecrowd.com.br/judge/en/problems/view/1176
#include <stdio.h>
int main(void) {
  int n = 60;
  long long int Fib[n];
  long long int first, second, next_number, i;

  Fib[0] = 0;
  Fib[1] = 1;
  first = Fib[0];
  second = Fib[1];
  for (i = 2; i <= n; i++) {
    next_number = (first + second);
    Fib[i] = next_number;
    first = second;
    second = next_number;
  }
  // Test Cases
  int test_cases, input;
  scanf("%d", &test_cases);
  for (int j = 0; j < test_cases; j++) {
    scanf("%d", &input);
    if (input >= 0 && input <= 60) {
      printf("Fib(%d) = %lld\n", input, Fib[input]);
    }
  }
  return 0;
}