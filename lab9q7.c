#include <stdio.h>

float rent(int days, int km)
{
    float total = days * 40;

    int freeKm = days * 100;

    if(km > freeKm)
        total += (km - freeKm) * 0.25;

    if(days >= 7)
        total = total - (total * 0.10);

    return total;
}

int main()
{
    int d, km;
    printf("Enter rental days and km: ");
    scanf("%d %d", &d, &km);

    float cost = rent(d, km);
    printf("Total Rent: %.2f", cost);
}
