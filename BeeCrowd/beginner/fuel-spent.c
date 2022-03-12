#include <stdio.h>

#define MILAGE 12

int main()
    {
        int time;   //spent time in the trip
        int speed;  // Average speed during the trip
        scanf("%d %d", &time, &speed);
        int distance = time * speed;
        float fuel = (float)distance / MILAGE;
        printf("%.3f\n", fuel);
        return 0;
    }