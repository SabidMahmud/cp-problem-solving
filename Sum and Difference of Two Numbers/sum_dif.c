#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
  int a, b;
  float x, y;
  scanf("%d %d\n", &a, &b);
  scanf("%f %f\n", &x, &y);
  if (1<=a && 1<=b && a<=10000 && b<=10000 && 1<=x && 1<=y && x<=10000 && y<=10000)
  {
   printf("%d %d\n%.1f %.1f\n", a+b, a-b, x+y, x-y);
  }else printf("Error!\n");

    return 0;
}
