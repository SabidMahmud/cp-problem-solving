/*write a program that reads a floating point number and then displays the right-most digit of the
integral part of the number.
*/

#include <stdio.h>

int main()
  {
    float x;
    scanf("%f",&x);
    int digit = (int)x%10;
    printf("%d", digit);
    return 0;
  }


/*
exercise 2: Modify the above program to display the two right most digit of the
integral part of the number.
*/
//answer:
/*
int main()
  {
    float x;
    scanf("%f",&x);
    // write the code here
    int digit1= (int)x%10;
    int digit2= (x/10)%10;
    printf("%d%d\n", digit2, digit1);

    return 0;
  }
*/
