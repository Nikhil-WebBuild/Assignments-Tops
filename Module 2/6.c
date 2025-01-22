//Write a C program that uses the break statement to stop printing numbers when it reaches 5. Modify the program to skip printing the number 3 using the continue statement.
#include <stdio.h>
int main()
{
    int n1, i;
    printf("Enter The Numerical Value Of N1:\t");
    scanf("%d", &n1);

    for (i = 1; i <= n1; i++)
    {
        if (i == 3)
        {
            continue;
        }
        printf("\n%d", i);
        if (i == 5)
        {
            break;
        }
    }

    return 0;
}