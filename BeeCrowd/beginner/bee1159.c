// Sum of Consecutive Even Numbers
#include <stdio.h>
int main(void) {
  int x;
  int sum, n, i;
  while (scanf("%d", &x)) {
    sum = 0, n = 0;
    if (x == 0) {
      break;
    } else {
      for (i = x;; i++) {
        if (i % 2 == 0) {
          sum += i;
          n += 1;
        }
        if (n == 5) {
          break;
        }
      }
    }
    printf("%d\n", sum);
  }
  return 0;
}