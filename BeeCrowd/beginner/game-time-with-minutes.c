// BeeCrowd #1047
// Game time with minute
#include <stdio.h>
#include <stdlib.h>

#define MIN 60
int main() {
  int i_hour, i_minute, f_hour, f_minute;
  scanf("%d %d %d %d", &i_hour, &i_minute, &f_hour, &f_minute);
  int time;
  time = ((f_hour * MIN) + f_minute - ((i_hour * MIN) + i_minute));
  if (time <= 0) {
    time = time + (24 * 60);
  }
  printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", (time / MIN), (time % MIN));
  return 0;
}