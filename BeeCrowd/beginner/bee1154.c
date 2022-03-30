// BeeCrowd 1154 // Average of the ages
#include <stdio.h>

int main(void) {
  int age, n = 0, sum = 0;
  float average;
  while (scanf("%d", &age)) {
    if (age < 0) {
      break;
    } else {
      sum += age;
      n++;
    }
  }
  average = (float)sum / n;
  printf("%.2f\n", average);
  return 0;
}