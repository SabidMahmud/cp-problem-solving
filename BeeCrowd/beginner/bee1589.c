// Bob Conduit
// https://www.beecrowd.com.br/judge/en/problems/view/1589
#include <stdio.h>

int main(void) {
    int T;
    int radius1, radius2, radius3;
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        scanf("%d %d", &radius1, &radius2);
        radius3 = radius1 + radius2;
        printf("%d", radius3);
        printf("\n");
    }
    return 0;
}
