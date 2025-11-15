#include <stdio.h>

float result(int m1, int m2, int m3)
{
    float avg = (m1 + m2 + m3) / 3.0;

    if(avg >= 50 && m1 >= 40 && m2 >= 40 && m3 >= 40)
    {
        printf("PASS\n");
    }
    else
    {
        printf("FAIL\n");
    }

    return avg;
}

int main()
{
    int a, b, c;
    printf("Enter marks of 3 subjects: ");
    scanf("%d %d %d", &a, &b, &c);

    float avg = result(a, b, c);
    printf("Average = %.2f", avg);
}
