/* 
  Read two integer values m & n and to decide and print whether m is a multiple of n.
*/

#include <stdio.h>
int main()
{
    int m, n;
    printf(" Enter the value of m = ");
      scanf("%d", &m);
    printf(" Enter the value of n = ");
      scanf("%d", &n);
    if(m%n == 0)
    {
      printf(" m is a multiple of n.\n");
    }
    else
      printf(" m is not a multiple of n.\n");
    return 0;
}
