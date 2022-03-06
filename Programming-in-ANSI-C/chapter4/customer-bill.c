/*
    The cost of one type of mobile service is Rs. 250 plus Rs. 1.25 for each call made
    over and avobe 100 calls. Write a program to read customer codes and calls made and print the bill for each customer.
*/

#include <stdio.h>
int main(void)
{
    int CustomerID, calls;
    int CALL_MAX=100;
    float COST_MIN=250;
    float cost;
    printf("Customer ID : ");
        scanf("%6d", &CustomerID);
    printf("Total Calls Made : ");
        scanf("%d", &calls);
    
    if(calls>=0 && calls<CALL_MAX)
    {
        printf("\n********** CUSTOMER BILL **********\n\n");
        printf("=> Customer ID        #%d\n", CustomerID);
        printf("=> Total Calls Made        %d \n", calls);
        printf("------------------------------------\n");
        printf("=> Total Cost           Rs. %.2f\n\n", COST_MIN);        
    }
    else
    {
        cost = COST_MIN+ 1.25*(calls-CALL_MAX);
        printf("\n********** CUSTOMER BILL **********\n\n");
        printf("=> Customer ID        #%d\n", CustomerID);
        printf("=> Total Calls Made        %d \n", calls);
        printf("------------------------------------\n");
        printf("=> Total Cost          Rs. %.2f\n\n", cost);
    }
return 0;       
}