//find the sum of the n-th sum of a harmonic series
#include <stdio.h>
#include <math.h>
int main()
{
   int n, i;
   float s = 0.00;
   scanf("%d",&n);

   for(i=1; i<=n; i++)
   {
    //  s+=1*pow(i,-1); //
    /*
      s += 1/i;
      here 1/i is integer/integer = integer. An int value always store the integer part of a number.
      so if we do int/ (int) i, the value of 1/i will be an integer.
      therefore we need to define at least one variable as float or double here.
    */
    s+=1.00/i; //or s+=1/(float)i;


   }
   printf("\nSum of the harmonic Series upto 1/%d terms : %.2f \n",n,s);
}
