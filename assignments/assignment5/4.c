// Multiplication table complex
#include <stdio.h>

int main(void) {
  int N, p, j;
  scanf("%d", &N);
  for (int i = 1; i <= N; i++) {
    for (j = 1; j <= i; j++) {
      printf("%d x %d = %d\n", i, j, (i * j));
    }
  }
  return 0;
}
