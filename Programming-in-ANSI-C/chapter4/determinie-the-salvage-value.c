/*
    if the purchase price, years of service and the annual depreciation are given,
    find the Salvage value.
    Formula : Depreciation = (PurcahsePrice-SalvageValue)/Years of Service.
*/
#include <stdio.h>

int main()
{
    float Depreciation, PurcahsePrice, SalvageValue, YoS;
    printf("Purchase Price: ");
    scanf("%f", &PurcahsePrice);
    printf("Annual Depreciation: ");
    scanf("%f", &Depreciation);
    printf("Year of Service: ");
    scanf("%f", &YoS);
    
    SalvageValue = PurcahsePrice - (Depreciation*YoS);

    printf("Salvage Value = %f\n", SalvageValue);
    return 0;
}