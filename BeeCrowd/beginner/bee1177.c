// Array Fill
// https://www.beecrowd.com.br/judge/en/problems/view/1177
#include <stdio.h>

int main(void) {
  int p = 1000, N[p];
  int T;
  scanf("%d", &T);
  int i, j = 0;
  for (i = 0; i < p; i++) {

    N[i] = j;

    j++;

    if (j == T) {
      j = 0;
    }
  }

  for (i = 0; i < p; i++) {
    printf("N[%d] = %d\n", i, N[i]);
  }
  return 0;
}