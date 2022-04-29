#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int N, S;
  scanf("%d", &N);
  S = (N * (N + 1) * (2 * N + 1)) / 6;
  printf("%d", S);
  printf(" = ");
  for (int i = 1; i <= N; i++) {
    printf("%d * %d", i, i);
    if (i < N) {
      printf(" + ");
    }
  }
  printf("\n");
  return 0;
}
