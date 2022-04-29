/*
Description:
You will write a code to solve the equation, A*x2 + B.X + C=0.
You will be given 3 values A, B, C. Each can be a floating-point value as input.
Print two values after the decimal point and you can print the values in any order.
If the solution is not possible print “NONE” without the quotes.
Separate the outputs for each test case with a single blank space.
Keep a new line character(‘\n’) after each print.
    Limits:
    0<=|A|<=100
    0<=|B|<=100
    0<=|C|<=100
*/

#include<stdio.h>
#include<math.h>

int main()
{
    float A,B,C,d,x1,x2;
    printf("Enter the value for A, B, C : \n");
    scanf("%f %f %f", &A, &B, &C);
    d = (B*B)-4*A*C;
    if (d<0)
    {
      printf("NONE\n");
    }
    else if (A<=100&&B<=100&&C<=100)
    {
        x1 = (-B+(sqrt(d)))/(2*A);
        x2 = (-B-(sqrt(d)))/(2*A);
        printf("%.2f %.2f", x1, x2);
    }
    else printf("NONE\n");
    return 0;
}
