#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int *ptr = arr;

    printf("%d\n", *ptr);       
    printf("%d\n", ptr[2]);     
    printf("%d\n", *(ptr + 3)); 

    ptr = ptr + 4;             
    printf("%d\n", *ptr);       
    printf("%d\n", *(ptr + 1)); 
    printf("%d\n", *(ptr + 2)); 

    int *ptr2 = &arr[5];        
    printf("%d\n", *ptr2);      
    return 0;
}
