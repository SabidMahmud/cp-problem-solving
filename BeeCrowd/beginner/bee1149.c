// BeeCrowd 1149 # Summing consecutive integers
#include <stdio.h>
int main(void) {
  int A, N;
  scanf("%d", &A);
read_n:
  scanf("%d", &N);
  int i, sum = 0;
  if (N <= 0) {
    goto read_n;
  } else {
    for (i = A; i < (A + N); i++) {
      sum = sum + i;
    }
    printf("%d\n", sum);
  }
  return 0;
}
