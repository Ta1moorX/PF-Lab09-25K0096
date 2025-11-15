#include <stdio.h>

int main()
{
    int a = 100, b = 200, c = 300;

    int *p1 = &a;
    int *p2 = &b;
    int *p3 = &c;

 
    int *temp = p1;
    p1 = p2;
    p2 = p3;
    p3 = temp;

  
    *p1 = *p1 + 10;     
    *p2 = *p2 - 20;     
    *p3 = *p3 * 2;      

  
    p1 = &b;
    p2 = &c;
    p3 = &a;


    *p1 = *p1 + 5;      
    *p2 = *p2 + 5;      
    *p3 = *p3 + 5;      

    printf("Final a = %d\n", a);
    printf("Final b = %d\n", b);
    printf("Final c = %d\n", c);

    return 0;
}
