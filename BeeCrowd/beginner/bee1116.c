// Bee 1116 # Dividing X by Y
#include <stdio.h>
int main(void) {
  int X, Y;
  float res;
  int n;
  scanf("%d", &n);
  for (int i = 1; i <= n; i++) {
    scanf("%d %d", &X, &Y);
    if (Y == 0) {
      printf("divisao impossivel\n");
    } else {
      res = (float)X / (float)Y;
      printf("%.1f\n", res);
    }
  }
  return 0;
}
