//Bee 1153 // FACTORIAL of N
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int N;
    scanf("%d", &N);
    int sum = 0, tempsum = N;
    for(int i = N-1; i >= 1; i--) {
        sum = tempsum*i;
        tempsum = sum;        
    }
    printf("%d\n", sum);
    return 0;
}