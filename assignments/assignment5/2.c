// Maximum number in the input
#include <stdio.h>

int main(void) {
  int N, x, maximum;
  scanf("%d", &N);
  scanf("%d", &maximum);
  for (int i = 2; i <= N; i++) {
    scanf("%d", &x);
    if (x > maximum) {
      maximum = x;
    }
  }
  printf("%d\n", maximum);
  return 0;
}
