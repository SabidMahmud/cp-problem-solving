// BeeCrowd #1064
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  float n;
  int i, num = 0;
  float sum = 0;
  for (i = 1; i <= 6; i++) {
    scanf("%f", &n);
    if (n > 0) {
      num = num + 1;
      sum = sum + n;
    }
  }
  printf("%d valores positivos\n%.1f\n", num, (sum / num));
  return 0;
}
