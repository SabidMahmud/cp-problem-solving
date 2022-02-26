#include <stdio.h>

int main()
{
    //type definition
    typedef float REAL ;
    REAL fahrenheit, celsius ;

    scanf("%f", &fahrenheit);

    printf("Fahrenheit Celsius\n\n");

        celsius = 5*(fahrenheit -32)/9;
        printf("%.1f      %.2f\n", fahrenheit, celsius);

}
