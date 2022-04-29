// Swaping of two values of a variable

#include<stdio.h>

int main()
{
    int A, B;
    A= 20;
    B= 30;
   //int temp= A;
    printf("A = %d, B = %d\n", A, B);
   // A = B; B = temp;

   A = A + B;
   B = A - B;
   A = A - B;
/*
Can be solved using * & / also... [A=A*B; B=A/B; A=A/B;]
*/
    printf("\nAfter swaping, A = %d, B = %d\n", A, B);
    return 0;
}
