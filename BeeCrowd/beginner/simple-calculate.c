#include<stdio.h>

int main(void)
{
    int p_code1, unit1, p_code2, unit2;
    float price1, price2, total;
    scanf("%d %d %f", &p_code1, &unit1, &price1);
    scanf("%d %d %f", &p_code2, &unit2, &price2);
    total = unit1*price1 + unit2*price2;
    printf("VALOR A PAGAR: R$ %.2f\n", total);
    return 0;
}