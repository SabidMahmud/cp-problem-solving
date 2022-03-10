#include <stdio.h>
#include <math.h>
int main(void)
{
    const double pi = 3.14159;
    float A, B, C;
    float triangulo, circulo, quadrado, retengulo;
    scanf("%f %f %f", &A, &B, &C);
    triangulo = A*C*1/2;
    printf("TRIANGULO: %.3f\n", triangulo);
    circulo = pi * pow(C,2);
    printf("CIRCULO: %.3f\n", circulo);
    quadrado = (A+B)*C/2;
    printf("QUADRADO: %.3f\n", quadrado);
    retengulo = A*B;
    printf("RETENGULO: %.3f\n", retengulo);
    return 0;
}