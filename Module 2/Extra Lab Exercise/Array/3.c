#include <stdio.h>
int main()
{
    int a[100], sum, avg, size, i;
    sum = 0;

    printf("Enter The Size Of An Array:\t");
    scanf("%d", &size);

    printf("\n");
    for (i = 0; i < size; i++)
    {
        printf("Enter The Elements Of An Array A[%d]:\t", i);
        scanf("%d", &a[i]);
    }
    printf("\n");
    for (i = 0; i < size; i++)
    {
        printf("\nThe Elements Of An Array A[%d]: %d ", i, a[i]);
        sum = sum + a[i];
    }

    printf("\n");
    printf("\nThe Additions Of Ann Array Is: %d ", sum);
    printf("\n%d Average Of An Array Is: %.2f", sum, (float)sum / (float)size);

    return 0;
}