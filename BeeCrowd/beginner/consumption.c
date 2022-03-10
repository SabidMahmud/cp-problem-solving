#include <stdio.h>
#include <math.h>
int main(void)
{
    int X; //distance(in km)
    float Y, consumption; //total fuel spent (in L)
    scanf("%d %f", &X, &Y);
    consumption = X/Y;
    printf("%.3f km/l\n", consumption);
    return 0;
}