// Snack

#include <stdio.h>
int main(void) {
  int x, y; // x=product code; y=quantity;
  float price;
  scanf("%d %d", &x, &y);

  switch (x) {
  case 1:
    price = y * 4.00;
    printf("Total: R$ %.2f\n", price);
    break;
  case 2:
    price = y * 4.50;
    printf("Total: R$ %.2f\n", price);
    break;
  case 3:
    price = y * 5.00;
    printf("Total: R$ %.2f\n", price);
    break;
  case 4:
    price = y * 2.00;
    printf("Total: R$ %.2f\n", price);
    break;
  case 5:
    price = y * 1.50;
    printf("Total: R$ %.2f\n", price);
    break;
  }
  return 0;
}
