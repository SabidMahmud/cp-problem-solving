/*
 Write a C program to input the sides of a triangle and determine whether the triangle is isoceles or not.
*/

#include<stdio.h>
int main()
{
  float a,b,c;
  scanf("%g %g %g", &a,&b,&c);
  if ((a+b)>c && (a+c)>b && (b+c)>a)
  {
    if(a==b||a==c||b==c)
      printf("This triangle is isoceles.\n");
    else printf("This triangle is NOT isoceles.\n");
  }
  else printf("This is not a Triangle...\n");
}
