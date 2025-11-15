#include <stdio.h>

int main()
{
    int grid[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    int *p = &grid[0][0];

  
    printf("%d\n", *p);  


    printf("%d\n", *(p + 5));  


    int *p2 = &grid[1][0];
    printf("%d\n", *p2);       


    printf("%d\n", *(p2 - 1)); 


    int total = 12;
    int i;
    for(i = 0; i < total; i++)
    {
        if(*(p + i) % 3 == 0)
        {
            printf("%d\n", *(p + i)); 
        }
    }


    printf("%d\n", *(p + 11)); 

    return 0;
}
