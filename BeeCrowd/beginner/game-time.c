// BeeCrowd #1046
// Calculate the duration of a game.

#include <stdio.h>

int main(void) {
  int start, end;
  scanf("%d %d", &start, &end);
  if (start <= 24 && end <= 24) {
    int duration;
    if (start > end) {
      duration = (24 - start) + end;
      printf("O JOGO DUROU %d HORA(S)\n", duration);
    } else if (start == end) {
      duration = (24+end)-start;
      printf("O JOGO DUROU %d HORA(S)\n", duration);
    } else {
      duration = end - start;
      printf("O JOGO DUROU %d HORA(S)\n", duration);
    }
  }
  return 0;
}
