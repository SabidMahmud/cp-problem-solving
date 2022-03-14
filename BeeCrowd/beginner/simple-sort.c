// Simple Sort.
// Bee Crowd online judge problem #1042

#include <stdio.h>

int main(void) {
  int x, y, z;
  scanf("%d %d %d", &x, &y, &z);
  // cases: xyz, zxy, yxz, yzx, xzy, zyx

  if (x < y && y < z) {
    printf("%d\n%d\n%d\n", x, y, z);
  } else if (z < x && x < y) {
    printf("%d\n%d\n%d\n", z, x, y);
  } else if (y < x && x < z) {
    printf("%d\n%d\n%d\n", y, x, z);
  } else if (y < z && z < x) {
    printf("%d\n%d\n%d\n", y, z, x);
  } else if (x < z && z < y) {
    printf("%d\n%d\n%d\n", x, z, y);
  } else {
    printf("%d\n%d\n%d\n", z, y, x);
  }
  printf("\n%d\n%d\n%d\n", x, y, z);
  return 0;
}
