//Brazil World Cup
//https://www.beecrowd.com.br/judge/en/problems/view/1564
#include <stdio.h>

int main(void)
{
    int N;

    while (scanf("%d", &N) != EOF)
    {
        if (N >= 0 && N <= 100)
        {
            if (N == 0)
            {
                printf("vai ter copa!\n");
            }
            else if ( N > 0 )
            {
                printf("vai ter duas!\n");
            }
        }
    }
    return 0;
}
