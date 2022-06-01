#include<stdio.h>

#define SEC 1
#define MIN 60
#define HR 3600

int main()
{
    int N;
    scanf("%d", &N);
    printf("%d:", N/HR); // printed the hours
    int rest = N%HR;         // calculate the rest of the seconds
    printf("%d:", rest/MIN);    // print the minutes
    rest = rest%MIN;        //  calculate the rest of the seconds
    printf("%d\n", rest/SEC);   //  printed the seconds
    return 0;
}
