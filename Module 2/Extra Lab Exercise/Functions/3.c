#include <stdio.h>
int main()
{
    int n1, i, rev, rem;
    rev = 0;

    printf("Enter The Value Of N1:\t");
    scanf("%d", &n1);
    int temp = n1;

    while (n1 != 0)
    {
        rem = n1 % 10;
        rev = (rev * 10) + rem;
        n1 = n1 / 10;
    }

    if (rev == temp)
    {
        printf("%d Is Pellindrome Number", temp);
    }
    else
    {
        printf("%d Is Not Pellindrome Number", temp);
    }

    return 0;
}