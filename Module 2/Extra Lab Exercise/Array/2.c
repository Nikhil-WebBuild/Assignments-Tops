#include <stdio.h>
int main()
{
    int n1[100][100], n2[100][100], ans[100][100], n3[100][100], n4[100][100], result[100][100];
    int i, size, j, k, v, h, row, col;

    printf("\nEnter Values Of 2 *2 Mtrix:-");
    printf("\nEnter Row Number:\t");
    scanf("%d", &v);
    printf("\nEnter Col Number:\t");
    scanf("%d", &h);
    printf("\nEnter The Size Of An Array:\t");
    scanf("%d", &size);

    printf("\nEnter The Numerical Numbers Of An Array N1:\n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("\nEnter The Value Of N1[%d][%d]:", i, j);
            scanf("%d", &n1[i][j]);
        }
    }
    printf("\nEnter The Numerical Numbers Of An Array N2:\n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("\nEnter The Value Of N2[%d][%d]:", i, j);
            scanf("%d", &n2[i][j]);
        }
    }
    printf("\n\nDisplay The Numerical Numbers Of An Array Matrix:");
    printf("\nArray Of N1:\n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf(" %d ", n1[i][j]);
        }
        printf("\n");
    }
    printf("\nArray Of N2:\n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf(" %d ", n2[i][j]);
        }
        printf("\n");
    }
    printf("\nAddition Of An Array Matrix:\n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            ans[i][j] = n1[i][j] + n2[i][j];
        }
    }
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf(" %d ", ans[i][j]);
        }
        printf("\n");
    }

    printf("\n------------------------------------------------------------------------------------");
    printf("\nValues Of 2 *2 Mtrix:-");
    printf("\nEnter Row Number:\t");
    scanf("%d", &row);
    printf("\nEnter Col Number:\t");
    scanf("%d", &col);
    printf("\nEnter The Size Of An Array:\t");
    scanf("%d", &size);

    printf("\nEnter The Numerical Numbers Of An Array N1:\n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("\nEnter The Value Of N3[%d][%d]:", i, j);
            scanf("%d", &n3[i][j]);
        }
    }
    printf("\nEnter The Numerical Numbers Of An Array N2:\n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("\nEnter The Value Of N4[%d][%d]:", i, j);
            scanf("%d", &n4[i][j]);
        }
    }

    printf("\n\nDisplay The Numerical Numbers Of An Array Matrix:");
    printf("\nArray Of N1:\n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf(" %d ", n3[i][j]);
        }
        printf("\n");
    }
    printf("\nArray Of N2:\n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf(" %d ", n4[i][j]);
        }
        printf("\n");
    }

    printf("\n--------------------------------------------------------");
    printf("\nMultiplication Of An Array Matrix:\n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            ans[i][j] = 0;
            for (k = 0; k < size; k++)
            {
                result[i][j] = result[i][j] + (n3[i][k] * n4[k][j]);
            }
        }
    }
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf(" %d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}