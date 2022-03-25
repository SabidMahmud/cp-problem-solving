// BeeCrowd 1131
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int inter, gremio;
  int p, grenais = 0, empates = 0, x = 0, y = 0;
start:
  while (scanf("%d %d", &inter, &gremio)) {
    if (inter > gremio) {
      x += 1;
    } else if (inter < gremio) {
      y += 1;
    } else {
      empates += 1;
    }
    grenais += 1;
    // x = 0;
    // y = 0;
  check:
    printf("Novo grenal (1-sim 2-nao)\n");
    scanf("%d", &p);
    if (p == 1) {
      goto start;
    } else if (p == 2) {
      break;
    } else {
      goto check;
    }
  }
  printf("%d grenais\n", grenais);
  printf("Inter:%d\n", x);
  printf("Gremio:%d\n", y);
  printf("Empates:%d\n", empates);
  if (x > y) {
    printf("Inter venceu mais\n");
  } else if (x < y) {
    printf("Gremio venceu mais\n");
  } else {
    printf("Não houve vencedor\n");
  }
  return 0;
}
