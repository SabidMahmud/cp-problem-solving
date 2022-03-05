/*
    Read three values and print the following results:
      - Sum of the values
      - Avarage of the three values
      - largest of the three
      - smallest of the three
*/

#include <stdio.h>

int main(void)
{
  float a, b, c;
  printf("Enter a, b, c : ");
    scanf("%f %f %f", &a,&b,&c);

  //sum of the values
    float sum = a+b+c;
    printf("Sum of the values = %g\n", sum);

  //Avarage of the three values
    float avg = sum/3;
    printf("Avarage of the values = %g\n", avg);
  
  //largest of the three
    float largest = a>b ? (a>c ? a : c) : (b>c ? b : c);
    printf("Largest of the values = %g\n", largest);
  
  //smallest of the values
    float smallest = a<b ? (a<c ? a : c) : (b<c ? b : c);
    printf("Smalles of the values = %g\n", smallest);
return 0;
}
