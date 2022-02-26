#include <stdio.h>

int main()
{
    //type definition
    typedef float REAL ;
<<<<<<< HEAD
    REAL fahrenheit, celsius ;

    scanf("%f", &fahrenheit);
=======
    REAL fahrenheit, celsius;
    
     scanf("%f", &fahrenheit);
>>>>>>> 7aa5cde436055ce6f1070a6cee6132c8067e5c3f

    printf("Fahrenheit Celsius\n\n");

        celsius = 5*(fahrenheit -32)/9;
        printf("%.1f      %.2f\n", fahrenheit, celsius);

}
