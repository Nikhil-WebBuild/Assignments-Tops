#include <stdio.h>
int main()
{
    int n1, sum = 0, rev = 0, rem;
    printf("Enter The Number Of N1:\t");
    scanf("%d", &n1);
    int temp = n1;

    while (n1 != 0)
    {
        rem = n1 % 10;
        sum = sum + rem;
        n1 = n1 / 10;
    }
    printf("\nEnter The Digits Of Sum Is: %d ", sum);

    n1 = temp;
    while (n1 != 0)
    {
        rem = n1 % 10;
        rev = n1 * 10 + rem;
        n1 = n1 / 10;
    }
    printf("\nEnter The Digits Of Reavers Number Is: %d ", rev);
    return 0;
}