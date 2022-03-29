#include <stdio.h>
#include <stdlib.h>
int main(void) {
  int X, Z, sum = X, n = 1, i;
  scanf("%d", &X);
read_z:
  scanf("%d", &Z);
  if (Z <= X) {
    goto read_z;
  } else {
    while (i == 2) {
      sum += (X + 1);
      n += 1;
      if (sum > Z) {
        n += 1;
        break;
      }
      i++;
    }
  }
  printf("%d\n", n);
  return 0;
}
