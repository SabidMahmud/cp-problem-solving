//Logical Sequence
#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
int a,b,c;
    for (int i = 1; i <= n; i++) {
        a = i*i;
        b = a * i;
        printf("%d %d %d\n", i, a, b);
        printf("%d %d %d\n", i, (a+1), (b+1));
    }
    return 0;
}