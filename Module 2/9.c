// Write a C program to demonstrate pointer usage. Use a pointer to modify the value of a variable and print the result.
#include <stdio.h>
int main()
{
    // int a = 10;
    // int *ptr = &a;

    // printf("\n The Value Of A: %d ", a);
    // printf("\nAdress Of A: %p ", ptr);
    // printf("\nAdress Of A: %d ", *ptr);

    int a;
    printf("Enter The Value Of A:\t");
    scanf("%d", &a);
    int *ptr = &a;

    printf("\n The Value Of A: %d ", a);
    printf("\nAdress Of A: %d ", *ptr);
    printf("\nAdress Of A: %p ", ptr);

    return 0;
}