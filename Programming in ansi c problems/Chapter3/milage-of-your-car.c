#include <stdio.h>
int main()
{
  float distance, fuel, milage;
  printf("Enter the distance (km) travelled : ");
  scanf("%f", &distance);
  printf("Enter the volume of fuel consumed (l): ");
  scanf("%f", &fuel);
  milage=distance/fuel;
  printf("The milage of your car is = %.2f kilometres per litter\n", milage);
  return 0;
}
