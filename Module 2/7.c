//Write a C program that calculates the factorial of a number using a function. Include function declaration, definition, and call.
#include <stdio.h>
int fact(int n1);
int main()
{
    int n1, ans;
    printf("Enter Your Numerical Value For N1:\t");
    scanf("%d", &n1);

    ans = fact(n1);
    printf("\n %d Factorial Number Is: %d", n1, ans);
    return 0;
}
int fact(int n1)
{
    int i, f = 1;
    for (i = 1; i <= n1; i++)
    {
        f = f * i;
    }

    return f;
}