// sum of consecutive odd numbers
#include <stdio.h>
int main (void) {
    int n, x, y;
    scanf("%d", &n);
    int sum, odd, p;  
    
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &x, &y);
        p = 0;
        sum = 0;
        for (odd = x; ; odd++) {
            if (odd%2 != 0) {
                sum += odd;
                p += 1;
            }
            if (p == y) {
                break;
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}