// Ho Ho Ho
// https://www.beecrowd.com.br/judge/en/problems/view/1759
#include <stdio.h>

int main(void) {
  int N;
  scanf("%d", &N);
  printf("Ho");
  for (int i = 2; i <= N; i++) {
    printf(" Ho");
  }
  printf("!\n");
  return 0;
}
