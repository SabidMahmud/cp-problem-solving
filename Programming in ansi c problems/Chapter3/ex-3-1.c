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
      s+=1*pow(i,-1);
   }
   printf("\nSum of the harmonic Series upto 1/%d terms : %.2f \n",n,s);
}
