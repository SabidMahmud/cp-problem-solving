// Find the number in a series of inputs
#include <stdio.h>

int main(void) {
  int n, searchnumber;
  scanf("%d", &n);
  int numbers[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &numbers[i]);
  }

  scanf("%d", &searchnumber);

  int NumberPresent = 0;
  for (int i = 0; i < n; i++) {
    if (numbers[i] == searchnumber) {
      NumberPresent = 1;
      break;
    }
  }
  if (NumberPresent == 1) {
    printf("Yes\n");
  } else {
    printf("No\n");
  }
  return 0;
}
