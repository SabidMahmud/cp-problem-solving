// Building House
// https://www.beecrowd.com.br/judge/en/problems/view/1541
#include <math.h>
#include <stdio.h>

int main(void) {
  int l1, l2, percentage, land;

  while (scanf("%d", &l1)) {
    if (l1 == 0) {
      break;
    } else {
      scanf("%d %d", &l2, &percentage);
      int area = (l1 * l2);
      land = sqrt((area * 100) / (float)percentage);
      printf("%d\n", (int)land);
    }
  }
  return 0;
}
