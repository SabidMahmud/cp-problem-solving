//BeeCrowd 1048
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float s; // S = salary
    scanf("%f", &s);
    float i;
    if (s>=0 && s<=400.00) {
        i = (s*15/100);
        s = s + i;
        printf("Novo salario: %.2f\n", s);
        printf("Reajuste ganho: %.2f\n", i);
        printf("Em percentual: 15 %%\n");
    } else if (s>=400.01 && s<=800.00) {
        i = (s*12/100);
        s = s + i;
        printf("Novo salario: %.2f\n", s);
        printf("Reajuste ganho: %.2f\n", i);
        printf("Em percentual: 12 %%\n");
    } else if (s>=800.01 && s<=1200.00) {
         i = (s*10/100);
        s = s + i;
        printf("Novo salario: %.2f\n", s);
        printf("Reajuste ganho: %.2f\n", i);
        printf("Em percentual: 10 %%\n");
    } else if (s>=1200.01 && s<=2000.00) {
         i = (s*7/100);
        s = s + i;
        printf("Novo salario: %.2f\n", s);
        printf("Reajuste ganho: %.2f\n", i);
        printf("Em percentual: 7 %%\n");
    } else if (s>2000.00) {
         i = (s*4/100);
        s = s + i;
        printf("Novo salario: %.2f\n", s);
        printf("Reajuste ganho: %.2f\n", i);
        printf("Em percentual: 4 %%\n");
    }
    return 0;
}