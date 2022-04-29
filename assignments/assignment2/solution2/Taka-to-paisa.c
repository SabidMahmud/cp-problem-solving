#include<stdio.h>
int main()
{
    float taka, paisa;
    scanf("%f", &taka);
    paisa = taka*100;
    printf("%.2f TK = %.0f Paisa\n",taka, paisa);
    return 0;
}
