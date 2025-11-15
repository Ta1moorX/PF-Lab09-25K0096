#include <stdio.h>

int checkTemp(int t)
{
    if(t > 35)
    {
        printf("HEAT ALERT\n");
        return 1;
    }
    else if(t < 10)
    {
        printf("COLD ALERT\n");
        return 2;
    }
    else if(t >= 15 && t <= 25)
    {
        printf("COMFORT ZONE\n");
        return 3;
    }
    else
    {
        printf("NORMAL CONDITIONS\n");
        return 4;
    }
}

int main()
{
    int temp;
    printf("Enter temperature: ");
    scanf("%d", &temp);
    int code = checkTemp(temp);
}
