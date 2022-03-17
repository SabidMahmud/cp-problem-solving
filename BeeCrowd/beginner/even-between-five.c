// BeeCrowd #1065
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int x, num = 0; // x = input int; num = number of the even int;
  int i = 1;
  while (i <= 5) {
      scanf("%d", &x);
    if (x % 2 == 0) {
      num = num + 1;
    }
    i = i+1;
  }
  printf("%d valores pares\n", num);
  return 0;
}