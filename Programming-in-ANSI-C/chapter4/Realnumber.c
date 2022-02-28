/*
A program to Input a Real Number & print the
(smallest integer not less than the given number) (R) (largest integer not grater than the given number)
*/

#include<stdio.h>

int main ()
{
    float R;
    printf("Enter the Real Number: ");
    scanf("%f",&R);
    int x,y;
    x= R+1;
    y= R-1;
    printf("%d %g %d\n", x, R, y);
    return 0;
}