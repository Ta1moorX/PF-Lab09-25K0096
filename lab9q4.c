#include <stdio.h>

float ship(float amount, float w)
{
    float cost = amount;

    if(amount > 100)
        return cost;

    if(w < 2)
        cost += 10;
    else if(w <= 5)
        cost += 15;
    else
        cost += 20;

    return cost;
}

int main()
{
    float amt, weight;
    printf("Enter order amount and weight: ");
    scanf("%f %f", &amt, &weight);

    float total = ship(amt, weight);
    printf("Total Cost: %.2f", total);
}
