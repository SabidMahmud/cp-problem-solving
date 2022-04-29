/*
Description:
You are given a series, S = 1+2+3+4+5+......+N. You will be given an integer value N,
You have to print the summation of the series.
Keep a new line character(‘\n’) after each print.
Limits:
1<=N<=1000
*/

#include<stdio.h>
//#include<conio.h>

int main()
{
    int N, s; //N is for the N and s is for Summation
    printf("Enter the value of N : \n");
    scanf("%d", &N);
    if (1<=N && N<=1000)
    {
        s = N*((N+1)/2);
        printf("The Summation of the series is : %d\n", s);
    }
    else printf("Sorry! The value of N exits the limit.\nInput a value between 1 and 1000 :)\n");
    return 0;
}
