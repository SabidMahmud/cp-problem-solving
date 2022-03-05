/*
  Write a program to read a four digit integer and print the sum of its digits.
*/
  
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    if(1000<=n && n<=9999)
    {
        int digitsum;
        int sum = 0;
        while (n != 0)
        {
            sum = sum + n % 10;
            n = n / 10;
        }
        digitsum =sum;
        printf("%d\n", digitsum);
    }
    return 0;
}
