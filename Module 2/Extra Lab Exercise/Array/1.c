#include <stdio.h>
int main()
{
    int n1[10], max, min, i, j, temp;

    for (i = 0; i < 10; i++)
    {
        printf("Enter The Numerical Number Of N1[%d]:\t", i);
        scanf("%d", &n1[i]);
    }

    printf("\n\nDisplay The Maximum And Minimum Number:");
    max = n1[0];
    min = n1[0];
    for (i = 1; i < 10; i++)
    {
        if (n1[i] > max)
        {
            max = n1[i];
        }
        if (n1[i] < min)
        {
            min = n1[i];
        }
    }
    printf("\nThe Maximum Number Is:%d", max);
    printf("\nThe Maximum Number Is:%d", min);

    printf("\n\nDisplay The Ascending Order Number:");
    for (i = 0; i < 10; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (n1[i] > n1[j])
            {
                temp = n1[i];
                n1[i] = n1[j];
                n1[j] = temp;
            }
        }
    }
    printf("\n Acending Number Is:");
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", n1[i]);
    }

    return 0;
}