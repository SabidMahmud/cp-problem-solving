#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
  int a, b, m, n;
  float x, y, p, q;
  scanf("%d %d\n", &a, &b);
  scanf("%f %f\n", &x, &y);
  if (1<=a && 1<=b && a<=10000 && b<=10000 && 1<=x && 1<=y && x<=10000 && y<=10000)
  {
    m = a + b;
    n = a-b;
    p = x+y;
    q = x-y;
    printf("%d %d\n%.1f %.1f\n", m, n, p, q);
  }else printf("Error!\n");

    return 0;
}
