#include <stdio.h>

float calcTax(float income)
{
    float tax = 0;

    if(income > 20000 && income <= 50000)
    {
        tax = (income - 20000) * 0.10;
    }
    else if(income > 50000)
    {
        tax = (30000 * 0.10) + ((income - 50000) * 0.20);
    }

    return tax;
}

int main()
{
    float income;
    printf("Enter income: ");
    scanf("%f", &income);

    float tax = calcTax(income);
    float net = income - tax;

    printf("Tax: %.2f\nNet Income: %.2f", tax, net);
}
