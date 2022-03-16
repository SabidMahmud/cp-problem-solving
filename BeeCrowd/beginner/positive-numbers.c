// BeeCrowd #1060
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  float n;
  int i, num = 0;
  for (i = 1; i <= 6; i++) {
    scanf("%f", &n);
    if (n > 0) {
      num = num + 1;
    }
  }
  printf("%d valores positivos\n", num);
  return 0;
}