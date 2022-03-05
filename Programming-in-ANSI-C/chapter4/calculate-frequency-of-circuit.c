#include <stdio.h>
#include <math.h>

#define C_LOW 0.01
#define C_MAX 0.1
#define STEP 0.01


int main(void)
{
    float L,C,R,Frequency;

    printf("Inductance = ");
        scanf("%f", &L);
    printf("Resistance = ");
        scanf("%f", &R);
    
    printf("\nDumped Natural Frequency : \n");
    
    //loop starts
    for(C = C_LOW; C<=C_MAX; C=C+STEP)
        {
            Frequency = sqrt( (1/(L*C)) - pow( (R/(2*C)), 2) );
            printf("%g\n", Frequency);
        }
    

 /*  //doing it with while loop
    C = C_LOW;
    while(C<=C_MAX)
    {
        Frequency = sqrt(1/(L*C) - pow(R/(2*C), 2));
            printf("%g\n", Frequency);
        C = C + STEP;
    }
*/
    
    return 0;
}