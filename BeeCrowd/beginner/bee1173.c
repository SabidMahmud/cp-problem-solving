// Array fill i : https://www.beecrowd.com.br/judge/en/problems/view/1173
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int N[10];
  int V;
  scanf("%d", &V);
  for (int i = 0; i < 10; i++) {
    N[i] = V;
    V = 2 * V;
  }
  for (int j = 0; j < 10; j++) {
    printf("N[%d] = %d\n", j, N[j]);
  }
  return 0;
}