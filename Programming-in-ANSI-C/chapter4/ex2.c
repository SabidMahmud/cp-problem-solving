/*
write a program that reads a floating point number and then
displays the two right most digit of the
integral part of the number.
*/

#include <stdio.h>

int main()
  {
    float x;
    scanf("%f",&x);
    // write the code here
    int digit1= (int)x%10;
    x=x/10;
    int digit2= (int)x%10;
    printf("%d%d\n", digit2, digit1);
    return 0;
  }
