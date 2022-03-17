//BeeCrowd #1067
// Odd numbers up to N
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int x;
    scanf("%d", &x);
    if (1<=x && x<=1000) {
        int i = 1;
        while (i<=x) {
            if (i%2 != 0) {
                printf("%d\n", i);
            }
            i = i+1;
        }
    }
    return 0;
}