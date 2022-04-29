#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int N, K;
  scanf("%d %d", &N, &K);
  int i = 1, pow = N;
  while (i < K) {
    pow = pow * N;
    i++;
  }
  printf("%d ^ %d = %d\n", N, K, pow);
  return 0;
}
