#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int X, Z, sum = 0;
  scanf("%d", &X);
read_z:
  scanf("%d", &Z);

  int n = 0;

  for (int i = 0;; i++) {
    if (Z <= X) {
      goto read_z;
    } else if (sum <= Z) {
      sum += (X + i);
      n += 1;
    } else {
      break;
    }
  }
  printf("%d\n", n);
  return 0;
}