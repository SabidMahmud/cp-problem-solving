// Easy Fibonacci number // Bee 1151
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int N;
  scanf("%d", &N);
  int var1 = 0, var2 = 1;
  if (N <= 1) {
    switch (N) {
    case 0:
      printf("%d", var1);
      break;
    case 1:
      printf("%d %d", var1, var2);
      break;
    }
  } else {
    printf("%d %d", var1, var2);
    int next_variable = var1 + var2;
    for (int i = 2; i < N; i++) {
      printf(" %d", next_variable);
      var1 = var2;
      var2 = next_variable;
      next_variable = var1 + var2;
    }
  }
  printf("\n");
  return 0;
}