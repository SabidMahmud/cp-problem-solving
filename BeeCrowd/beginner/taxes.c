// BeeCrowd #1051
// Taxes
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  float salary, tax, rest;
  scanf("%f", &salary);
  if (salary >= 0.00 && salary <= 2000.00) {
    printf("Isento\n");
  } else if (salary > 2000 && salary <= 3000.00) {
    tax = (salary - 2000) * ((float)8 / 100);
    printf("R$ %.2f\n", tax);
  } else if (salary > 3000 && salary <= 4500) {
    tax = ((salary - 3000) * ((float)18 / 100)) + ((float)1000 * 8 / 100);
    printf("R$ %.2f\n", tax);
  } else if (salary > 4500) {
    tax = ((salary - 4500) * ((float)28 / 100) + (1500 * 18 / (float)100) +
           (1000 * 8 / (float)100));
    printf("R$ %.2f\n", tax);
  }
  return 0;
}