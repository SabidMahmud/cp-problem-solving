#include<stdio.h>

int main()
{
    float P,U;
    scanf("%f %f", &P, &U);
    float total = P*U;
    printf("**********RICE COST**********\n");
    printf("Price              %.2f\n", P);
    printf("Unit               %.2f\n", U);
    printf("*****************************\n");
    printf("Total              %.2f\n", total);
    return 0;
}
