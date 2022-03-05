/*
    read two numbers and perform their division. if the division is not possible
    then an error message "Divsion not possible" is displayed
*/

#include <stdio.h>
int main(void)
{
    float a,b;
    printf("Input two numbers : ");
        scanf("%f %f", &a, &b);
    if (b!=0)
        {
            printf("a/b = %g\n", (a/b));
        }
    else
        printf("Division not possible.\n");

    return 0;
}