#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Main
int main()
{
    int n;
    scanf("%d", &n);
    if(10000<=n && n<=99999)
    {
        int digitsum;
        int sum = 0;
        while (n != 0)
        {
            sum = sum + n % 10;
            n = n / 10;
        }
        digitsum =sum;
        printf(" %d ", digitsum);
    }
    return 0;
}
