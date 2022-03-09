#include<stdio.h>
#include<string.h>

int main(void)
{
    char name[14];
    double salary, sale, Total;
    scanf("%s", name);
    scanf("%lf %lf", &salary, &sale);
    Total = salary + (sale*15/100);
    printf("TOTAL = R$ %.2lf\n", Total);
    return 0;
}