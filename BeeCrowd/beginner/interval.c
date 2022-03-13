#include <stdio.h>

int main()
{
    float number;
    scanf("%f", &number);
    if (number>=0) {
        if (0<=number && number<=25)
        {
            printf("Intervalo [25,50]\n");
        }
        else if (25<number && number <=50)
        {
            printf("Intervalo (25,50]\n");
        }
        else if (75<number && number <= 100)
        {
            printf("Intervalo (75,100]\n");
        }
    }else {
    printf("Fora de intervalo\n");
    }
    return 0;
}