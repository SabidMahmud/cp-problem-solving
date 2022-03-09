#include<stdio.h>
#include<math.h>

int main(void)
{
    float R, volume;
    const float pi = 3.14159;
    scanf("%f", &R);
    //volume = (4/3)*pi*R^3
    volume = (4.0/3) * pi * R*R*R;
    printf("VOLUME = %.3f\n", volume);
    return 0;
}