// Array Replacement i
// BeeCrowd https://www.beecrowd.com.br/judge/en/problems/view/1172

#include <stdio.h>

int main(void) {
  int arr[10];
  for (int i = 0; i < 10; i++) {
    scanf("%d", &arr[i]);
    if (arr[i] <= 0) {
      arr[i] = 1;
    }
  }
  for (int j = 0; j < 10; j++) {
    printf("X[%d] = %d\n", j, arr[j]);
  }
  return 0;
}