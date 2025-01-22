#include <stdio.h>
int fact(int n1);
int main()
{
    int n1;
    printf("Enter The Value Of N1:\t");
    scanf("%d", &n1);
    int ans = fact(n1);
    printf("%d Factorial Value Is: %d", n1, ans);

    return 0;
}
int fact(int n1)
{
    int i, fact = 1;
    for (i = 1; i <= n1; i++)
    {
        fact = fact * i;
    }
    return fact;
}