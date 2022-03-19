// BeeCrowd #10709
// Calculate the Weighted averages of the numbers;
#include <stdio.h>
#include <stdlib.h>

#define WA 2
#define WB 3
#define WC 5

int main() {
  int N;
  float A, B, C, average;
  scanf("%d", &N);
  int i = 1;
  while (i <= N) {
    scanf("%f %f %f", &A, &B, &C);
    average = ((A * WA) + (B * WB) + (C * WC)) / (WA + WB + WC);
    printf("%.1f\n", average);
    i++;
  }
  return 0;
}