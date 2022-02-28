#include<stdio.h>

#define N 10
int main() {
  int count;
  float sum, avarage, number;
  sum =0;
  count = 0;
  while (count<N) {
    scanf("%f\n", &number);
    sum = sum + number;
    count = count+1;
  }
  avarage = sum/N;
  printf("N = %d sum = %f  Avarage = %f", N, sum, avarage);
}
