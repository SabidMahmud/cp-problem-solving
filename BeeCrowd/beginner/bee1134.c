#include <stdio.h>

int main(void) {
  int x;
  int alc = 0, gas = 0, diesel = 0;
top:
  while (scanf("%d", &x)) {
    if (x == 4) {
      break;
    } else if (x == 1) {
      alc += 1;
    } else if (x == 2) {
      gas += 1;
    } else if (x == 3) {
      diesel += 1;
    } else {
      goto top;
    }
  }
  printf("MUITO OBRIGADO\n");
  printf("Alcool: %d\n", alc);
  printf("Gasolina: %d\n", gas);
  printf("Diesel: %d\n", diesel);
  return 0;
}
