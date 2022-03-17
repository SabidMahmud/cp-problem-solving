// BeeCrowd #1066
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int x; // x = input;
  int i = 1;
  int even = 0, odd = 0, possitive = 0, negative = 0;
  while (i <= 5) {
    scanf("%d", &x);
    if (x > 0) {
      possitive = possitive + 1;
    }
    if (x < 0) {
      negative = negative + 1;
    }
    if (x % 2 == 0) {
      even = even + 1;
    }
    if (x % 2 != 0) {
      odd = odd + 1;
    }
    i = i + 1;
  }
  printf("%d valor(es) par(es)\n", even);
  printf("%d valor(es) impar(es)\n", odd);
  printf("%d valor(es) positivo(s)\n", possitive);
  printf("%d valor(es) negativo(s)\n", negative);
  return 0;
}