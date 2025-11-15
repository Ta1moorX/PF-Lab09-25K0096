#include <stdio.h>

int trans(int limit, int amount)
{
    if(amount <= limit)
    {
        printf("APPROVED\n");
        limit = limit - amount;
    }
    else
    {
        printf("DECLINED\n");
    }
    return limit;
}

int main()
{
    int limit, amount;
    printf("Enter remaining limit: ");
    scanf("%d", &limit);
    printf("Enter transaction amount: ");
    scanf("%d", &amount);

    int newLimit = trans(limit, amount);
    printf("New Limit: %d", newLimit);
}
