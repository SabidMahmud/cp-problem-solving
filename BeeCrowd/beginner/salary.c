#include<stdio.h>
int main(void)
{
    int number, hour;
    float hourlypayment;
    scanf("%d %d %f", &number, &hour, &hourlypayment);
    printf("NUMBER = %d\n", number);
    printf("SALARY = U$ %.2f\n", (hour*hourlypayment));
    return 0;
}