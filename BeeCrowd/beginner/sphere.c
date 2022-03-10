#include <stdio.h>
#include <math.h>

int main(void)
{
    double R, volume;
    const double pi = 3.14159;
    scanf("%lf", &R);
    //volume = (4/3)*pi*R^3
    volume = (4.0/3) * pi * pow(R, 3);
    printf("VOLUME = %.3lf\n", volume);
    return 0;
}