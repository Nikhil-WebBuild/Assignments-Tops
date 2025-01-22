#include <stdio.h>
int main()
{
    int n1, r, i, ans;
    printf("Enter The Numerical Number For Multiplication Table:\t");
    scanf("%d", &n1);

    printf("Enter The Range Of The Multiplication Tbale:\t");
    scanf("%d", &r);

    printf("\nThe Multiplication Table Of: %d ", n1);
    printf("\n");
    for (i = 1; i <= r; i++)
    {
        ans = n1 * i;
        printf("%d * %d = %d", n1, i, ans);
        printf("\n");
    }

    return 0;
}