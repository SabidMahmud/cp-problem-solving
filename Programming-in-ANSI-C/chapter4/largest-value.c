/*
    Given three values,
    Write a program to read three values from keyboard and print out the
    largest of them without using if statement.
*/
#include <stdio.h>
int main()
{
  int a,b,c;
  scanf("%d %d %d", &a,&b,&c);
  int largestnumber = (a>b) ? ((a>c) ? a : c) : ((b>c) ? b : c);
  printf("The largest value is %d\n", largestnumber);
  return 0;
}
