#include <stdio.h>

float bill(float food, int people)
{
    float tax = food * 0.08;
    float tip;

    if(food > 50)
        tip = food * 0.15;
    else
        tip = food * 0.10;

    float ser = 0;

    if(people > 6)
        ser = food * 0.05;

    return food + tax + tip + ser;
}

int main()
{
    float food;
    int ppl;

    printf("Enter food cost and number of people: ");
    scanf("%f %d", &food, &ppl);

    float t = bill(food, ppl);
    printf("Total Bill: %.2f", t);
}
