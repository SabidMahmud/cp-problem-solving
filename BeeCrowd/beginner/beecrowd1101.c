// Bee#1101
#include <stdio.h>
int main(void) {
  int M, N;
  int i, sum;
  while (scanf("%d %d", &M, &N) == 2) {
    if (M <= 0 || N <= 0) {
      break;
    } else if (M < N) {
      sum = 0;
      for (i = M; i <= N; i++) {
        sum += i;
        printf("%d ", i);
      }
      printf("Sum=%d\n", sum);
    } else if (N <= M) {
      sum = 0;
      for (i = N; i <= M; i++) {
        sum += i;
        printf("%d ", i);
      }
      printf("Sum=%d\n", sum);
    }
  }
  // printf("Sum = %d\n", sum);
  return 0;
}
