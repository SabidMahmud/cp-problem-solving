// Lowest Number and Position
// https://www.beecrowd.com.br/judge/en/problems/view/1180
#include <stdio.h>
int main(void) {
   int N;
   scanf("%d", &N);
   int X[N];
   for (int i = 0; i < N; i++) {
      scanf("%d", &X[i]);
   }

   int minimum_value = X[0];
   for (int i = 1; i < N; i++) {
      if (X[i] < minimum_value) {
         minimum_value = X[i];
      }
   }

   int position ;
   for (int i = 0; i < N; i++) {
      if (minimum_value == X[i]) {
         position = i;
         break;
      }
   }
   printf("Menor valor: %d\nPosicao: %d", minimum_value, position);
   return 0;
}