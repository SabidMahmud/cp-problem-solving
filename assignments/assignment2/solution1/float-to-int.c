/*
You will provided floating point number. You have to print its integer part
keeping the provided specific format.
*/

#include<stdio.h>
int main()
{
    float num;
    scanf("%f", &num);
    float intgnum = (int) num;
    printf("Int part of %g is %.0f\n", num, intgnum);
    return 0;
}
