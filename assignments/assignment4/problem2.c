#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int N, K;
  scanf("%d %d", &N, &K);
  for (int i = 1; i <= K; i++) {
    printf("%d * %d = %d\n", N, i, (N * i));
  }
  return 0;
}
