#include <stdio.h>
int main()
{
    int term, n1, n2, n3, i;
    n1 = 0;
    n2 = 1;

    printf("Enter The Value Of Term:\t");
    scanf("%d", &term);

    printf("%d Fibonacci Series Is : %d  %d", term, n1, n2);

    for (i = 1; i <= term - 2; i++)
    {
        n3 = n1 + n2;
        printf(" %d ", n3);
        n1 = n2;
        n2 = n3;
    }

    return 0;
}