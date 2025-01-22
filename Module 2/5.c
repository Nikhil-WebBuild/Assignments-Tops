// Write a C program to print numbers from 1 to 10 using all three types of loops (while, for, do-while).
#include <stdio.h>
int main()
{
    int i;
    printf("Using For Loop Print The 1 - 10 Numerical Value:");
    for (i = 1; i <= 10; i++)
    {
        printf("\n%d", i);
    }

    printf("\n----------------------------------------------------------");
    printf("\nUsing While Loop Print The 1 - 10 Numerical Value:");
    i = 1;
    while (i <= 10)
    {
        printf("\n%d", i);
        i++;
    }

    printf("\n----------------------------------------------------------");
    printf("\nUsing Do-While Loop Print The 1 - 10 Numerical Value:");
    i = 1;
    do
    {
        printf("\n%d", i);
        i++;
    } while (i <= 10);

    return 0;
}