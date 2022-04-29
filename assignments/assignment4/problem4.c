#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int N;
  scanf("%d", &N);
  int i, flag = 0;
  for (i = 2; i <= N / 2; i++) {
    if (N % i == 0) {
      flag = 1;
      break;
    }
  }
  if (N < 2) {
    flag = 1;
  }
  if (flag == 0) {
    printf("PRIME\n");
  } else {
    printf("NOT PRIME\n");
  }
  return 0;
}
