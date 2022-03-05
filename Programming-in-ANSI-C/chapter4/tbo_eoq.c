#include<stdio.h>
#include<math.h>

int main(void)
{
    float setup_cost, demand_rate, holding_cost;
    printf("Setup Costs = ");
        scanf("%g",&setup_cost);
    printf("Holding Cost per Unit time = ");
        scanf("%g",&holding_cost);
    printf("Demand Rate = ");
        scanf("%g",&demand_rate);
    
    float EOQ = sqrt((2*demand_rate*setup_cost)/holding_cost);
    printf("EOQ = %g\n", EOQ);

    float TBO = sqrt((2*setup_cost)/(demand_rate*holding_cost));
    printf("&\nTBO = %g\n", TBO);

return 0;
}