#include<stdio.h>
int main()
{
  float a,b,c,x;
  scanf("%f %f %f", &a,&b,&c);
  //the given expression is x=a-b/3+c*2-1
  x=a-b/3+c*2-1 ;
  printf("%g\n", x);
  return 0;
}
