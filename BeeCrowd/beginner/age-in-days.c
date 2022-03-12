#include <stdio.h>

#define DIA 1
#define MES 30
#define ANO 365

int main()
{
  int age; // A person's age (in days)
  scanf("%d", &age);
  printf("%d ano(s)\n", age/ANO);
  int rest = age % ANO;
  printf("%d mes(es)\n", rest/MES);
  rest = rest % MES;
  printf("%d dia(s)\n", rest/DIA);
  return 0;
}
