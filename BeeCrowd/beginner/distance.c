#include<stdio.h>
#include<math.h>

    //car Y takes 2 minutes to take 1km distance from car X.
    // read the distance of car Y in reference to car X.
    // Calculate the time required for car Y to take this distance.

int main(void)
{
    int distance;
    scanf("%d", &distance);
    int time = 2 * distance;
    printf("%d minutos\n", time);
    return 0;
}