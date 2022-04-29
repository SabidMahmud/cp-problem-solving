/*You will be given three numbers, x, y, and z.
You have to print the numbers in ascending order. 
*/

#include <stdio.h>
int main()
{
    float x, y, z;
    scanf("%f %f %f", &x, &y, &z);

    // cases: xyz, zxy, yxz, yzx, xzy, zyx  

    if (x<y && y<z)
    {
        printf("%g %g %g\n", x,y,z);
    }
    else if (z<x&&x<y)
    {
        printf("%g %g %g\n", z, x, y);
    }
    else if (y<x&&x<z)
    {
        printf("%g %g %g\n", y, x, z);
    }
    else if (y<z&&z<x)
    {
        printf("%g %g %g\n", y, z, x);
    }
    else if (x<z&&z<y)
    {
        printf("%g %g %g\n", x, z, y);
    }
    else printf("%g %g %g\n", z, y, x);

return 0;
}