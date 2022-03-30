// BeeCrowd 1080
#include <stdio.h>

int main(void) {
  int n = 99;
  int number[n];
  // input the numbers in the array
  for (int i = 0; i <= n; i++) {
    scanf("%d", &number[i]);
  }
  // find the highest number in the array
  int highest = number[0];
  for (int j = 0; j <= n; j++) {
    if (number[j] > highest) {
      highest = number[j];
    }
  }
  // find the place of the highest number in the array
  int place;
  for (int k = 0; k <= n; k++) {
    if (number[k] == highest) {
      place = k + 1;
      break;
    }
  }
  printf("%d\n%d\n", highest, place);
  return 0;
}