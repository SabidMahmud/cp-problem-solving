// BeeCrowd #1072
// Count the number of the input for different cases;
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int X, N;
  scanf("%d", &N);
  int i, s_in = 0, s_out = 0;
  for (i = 1; i <= N; i++) {
    scanf("%d", &X);
    if (X >= 10 && X <= 20) {
      s_in += 1;
    } else {
      s_out += 1;
    }
  }
  printf("%d in\n", s_in);
  printf("%d out\n", s_out);
  return 0;
}