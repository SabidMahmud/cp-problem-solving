/*  Input the value of 4 variables a,b,c,d. and compute the resultant value of following expressions:
        (a + b)*(c / d)
        (a + b)*c/d
        a + (b*c)/d
*/
#include <stdio.h>

#include <math.h>

int main()
{
    float a,b,c,d;
    printf("A = ");
      scanf("%f", &a);
    printf("B = ");
      scanf("%f", &b);
    printf("C = ");
      scanf("%f", &c);
    printf("D = ");
      scanf("%f", &d);

    printf("(a + b)*(c/d) = %g\n", ((a + b)*(c / d)) );
    printf("(a + b)*c/d = %g\n", ((a + b)*c/d) );
    printf("a + (b*c)/d = %g\n", (a + (b*c)/d) );
    return 0;
  }
