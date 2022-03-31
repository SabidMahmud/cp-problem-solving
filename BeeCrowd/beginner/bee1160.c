// Population increase Calculation
#include <stdio.h>
#include <stdlib.h>
int main(void) {
  int n;           // Test cases
  long int PA, PB; // Population of city A and city B
  double G1, G2;   // Population Growth Rate of City A and City B
  int years;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%ld %ld %lf %lf", &PA, &PB, &G1, &G2);
    years = 0;
    while (PA <= PB) {
      PA = PA + (PA * G1 / 100);
      PB = PB + (PB * G2 / 100);
      years++;
      if (years > 100) {
        printf("Mais de 1 seculo.\n");
        break;
      }
    }
    if (years <= 100) {
      printf("%d anos.\n", years);
    }
  }
  return 0;
}