/* Input 3 int and print them as a date*/

#include<stdio.h>

int main()
{
    int D, M, Y;
    printf("Input the integers (M D Y):");
    scanf("%d %d %d", &M, &D, &Y);
    if (0<M&&M<=12 && 0<D&&D<=31 && 0<Y&&Y<=5000)
    {
        printf("%d/%d/%d\n", D,M,Y);
        printf("%d-%d-%d\n", D,M,Y);
        printf("%d.%d.%d\n", D,M,Y);
    } else
    {
        printf("ERROR!");
    }
    
    return 0;
}