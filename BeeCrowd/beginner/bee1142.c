// Bee 1142
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int N;
  scanf("%d", &N);
  int n = 1;
  for (int i = 1; i <= N; i++) {
    while (n <= N * 4) {
      if (n % 4 == 0) {
        printf("PUM\n");
      } else {
        printf("%d ", n);
      }
      n++;
    }
  }
  return 0;
}
