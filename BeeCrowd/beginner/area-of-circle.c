#include <stdio.h>
#include <math.h>
int main() 
{ 
    double A,R;
 const double PI=3.14159;
    scanf("%lf", &R);
    A= PI*pow(R,2);
    printf("A=%.4f\n", A); 
    return 0;
}