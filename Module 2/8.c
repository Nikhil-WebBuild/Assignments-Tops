//Write a C program that stores 5 integers in a one-dimensional array and prints them. Extend this to handle 
//a two-dimensional array (3x3 matrix) and calculate the sum of all elements.
#include <stdio.h>
int main()
{
    // One Dimentional Array
    int a[100], i, b[100][100], c[100][100], size, sum[100][100], j, h, v;
    for (i = 0; i < 5; i++)
    {
        printf("Enter The Array Of An Elements a[%d]:\t", i);
        scanf("%d", &a[i]);
    }
    printf("\n\nElements An Array of a is:");
    for (i = 0; i < 5; i++)
    {
        printf("\n%d", a[i]);
    }

    // Two Dimentional Array
    printf("\n-------------------------------------------");

    printf("\nEnter Row Number:\t");
    scanf("%d", &v);
    printf("\nEnter Col Number:\t");
    scanf("%d", &h);
    printf("\nEnter The Array Of An Size :\t");
    scanf("%d", &size);
    printf("\n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("\nEnter The Array Of An Elements b[%d][%d]:\t", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    printf("\n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("\nEnter The Array Of An Elements c[%d][%d]:\t", i, j);
            scanf("%d", &c[i][j]);
        }
    }

    printf("\n\n");
    printf("Elements Of An Array B:");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf(" %d ", b[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("\nElements Of An Array   C:");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf(" %d ", c[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");
    printf("\nThe Sum Of Array Elements B & C Is:");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            sum[i][j] = b[i][j] + b[i][j];
            printf(" %d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}