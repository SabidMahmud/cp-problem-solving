// Bee #1117
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  float a, sum = 0;
  int flag = 0;
  while (scanf("%f", &a)) {
    if (a >= 0 && a <= 10) {
      sum += a;
      flag += 1;
      if (flag == 2) {
        printf("media = %.2f\n", (sum / flag));
        break;
      }
    } else {
      printf("nota invalida\n");
    }
  }
  return 0;
}
