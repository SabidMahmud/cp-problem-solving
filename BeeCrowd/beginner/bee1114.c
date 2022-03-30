// Bee 1114 // Fixed password
#include <stdio.h>

int main(void) {
  int password = 2002;
  int input;
start:
  scanf("%d", &input);
  if (input == password) {
    printf("Acesso Permitido\n");
  } else {
    printf("Senha Invalida\n");
    goto start;
  }
  return 0;
}