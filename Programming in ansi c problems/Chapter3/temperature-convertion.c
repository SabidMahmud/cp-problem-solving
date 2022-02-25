#include <stdio.h>

//declaring symbolic constants
#define F_LOW 0
#define F_MAX 250

int main()
{
    //type definition
    typedef float REAL ;
    REAL fahrenheit, celsius ;

    fahrenheit = F_LOW;
     scanf("%f", &fahrenheit);

    printf("Fahrenheit Celsius\n\n");

        celsius = 5*(fahrenheit -32)/9;
        printf("%.1f      %.2f\n", fahrenheit, celsius);
           // fahrenheit = fahrenheit + STEP;

}
