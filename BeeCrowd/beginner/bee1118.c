// Bee 1118
#include <stdio.h>
#include <stdlib.h>
int main(void) {
  float X, sum = 0;
  int flag = 0;
  int p;
top:
  while (scanf("%f", &X)) {
    if (X >= 0 && X <= 10) {
      sum += X;
      flag += 1;
      if (flag == 2) {
        printf("media = %.2f\n", (sum / flag));
        sum = 0;
        flag = 0;
        new : printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d", &p);
        if (p == 1 || p == 2) {
          if (p == 1) {
            goto top;
          } else if (p == 2) {
            break;
          }
        } else {
          goto new;
        }
      } else if (X == 2) {
        break;
      }
    } else {
      printf("nota invalida\n");
    }
  }
  return 0;
}
