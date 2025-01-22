#include <stdio.h>
int main()
{
    int n, i, j, count = 0;
    printf("\nEnter Numerical Value Of N1:\t");
    scanf("%d", &n);
    for (i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 0)
    {
        printf("%d is a prime number", n);
    }
    else
    {
        printf("%d is not a prime number", n);
    }
    printf("\nPrime numbers between 1 and %d are:", n);
    for (i = 1; i <= n; i++)
    {
        for (j = 2; j <= i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (i == j)
        {
            printf("\n %d ", j);
        }
    }
    return 0;
}