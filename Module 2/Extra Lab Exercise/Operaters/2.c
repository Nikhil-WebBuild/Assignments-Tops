#include <stdio.h>
int main()
{
    int n1;
    printf("Enter The Number Of N1:\t");
    scanf("%d", &n1);

    printf("Odd & Evend Number");
    if (n1 % 2 == 0)
    {
        printf("\n%d Is Even Number", n1);
    }
    else
    {
        printf("\n%d Is Odd Number", n1);
    }

    printf("\n----------------");
    printf("\nPositive Or Nagative Number");
    if (n1 > 0)
    {
        printf("\n%d Is Positive Number", n1);
    }
    else
    {
        printf("\n%d Is Nagative Number", n1);
    }

    printf("\n---------------------");
    printf("\nMultipat with 3 & 5:");
    if (n1 % 3 == 0 && n1 % 5 == 0)
    {
        printf("\n%d Number Multiple With 3 & 5", n1);
    }
    else
    {
        printf("\n%d Number Is Not Multiple With 3 & 5", n1);
    }

    return 0;
}