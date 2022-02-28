#include <stdio.h>

int main()
{
    float Depreciation, PurcahsePrice, SalvageValue, YoS;
    printf("Purchase Price: ");
    scanf("%f", &PurcahsePrice);
    printf("Salvage Value: ");
    scanf("%f", &SalvageValue);
    printf("Year of Service: ");
    scanf("%f", &YoS);
    Depreciation = (PurcahsePrice-SalvageValue)/YoS;
    printf("Yearly Depreciation = %f\n", Depreciation);
    return 0;
}