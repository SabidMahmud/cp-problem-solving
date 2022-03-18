// BeeCrowd #1078
#include <stdio.h>

int main(void) {
  int N;
  scanf("%d", &N);
  int i = 1;
  while (i <= 10) {
    if (N >= 1 && N <= 1000) {
      printf("%d x %d = %d\n", i, N, (i * N));
    }
    i++;
  }
  return 0;
}