//a program to calculate the square of a number
#include <stdio.h>
#include <math.h>
int main ()
{
  int x;
  printf("Enter your number: ");
  scanf("%d", &x);
  x=x*x;
  printf("The square of your input is = %d\n", x);
  return 0;
}
