// https://www.beecrowd.com.br/judge/en/problems/view/1175
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n = 20;
  int N[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &N[i]);
  }
  for (int j = 0; j < n; j++) {
    printf("N[%d] = %d\n", j, N[n - 1 - j]);
  }
  return 0;
}