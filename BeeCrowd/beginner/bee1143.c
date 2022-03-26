// Bee 1143
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int N;
  scanf("%d", &N);
  int s, c;
  for (int i = 1; i <= N; i++) {
    s = pow(i, 2);
    c = pow(i, 3);
    printf("%d %d %d\n", i, s, c);
  }
  return 0;
}
