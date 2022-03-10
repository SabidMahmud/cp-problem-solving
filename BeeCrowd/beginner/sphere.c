#include <stdio.h>
#include <math.h>

int main(void)
{
    double R, volume;
<<<<<<< HEAD
    const double pi = 3.14159;
    scanf("%lf", &R);
    //volume = (4/3)*pi*R^3
    volume = (4.0/3) * pi * pow(R, 3);
=======
    const float pi = 3.14159;
    scanf("%lf", &R);
    //volume = (4/3)*pi*R^3
    volume = (4.0/3) * pi * R*R*R;
>>>>>>> 03d2596c56d8f5080e096731a6d9ded4cb4a7b36
    printf("VOLUME = %.3lf\n", volume);
    return 0;
}
