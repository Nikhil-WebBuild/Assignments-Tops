#include <stdio.h>
int main()
{
    int n1, n2, n3;
    printf("Enter The Numerical Number Of N1:\t");
    scanf("%d", &n1);
    printf("Entger The Numerical Number OF N2:\t");
    scanf("%d", &n2);
    printf("Enter The Numerical Number Ocf N3:\t");
    scanf("%d", &n3);

    printf("\n-------> Find The Biggest And Smallest Number Using If-Else Statements");
    if (n1 >= n2 && n1 >= n3)
    {
        printf("\nN1 Is  %d  Largest Number.", n1);
    }
    else if (n2 >= n1 && n2 >= n3)
    {
        printf("\nN2 Is  %d  Largest Number.", n2);
    }
    else
    {
        printf("\nN3 Is :%d  Largest number.", n3);
    }

    if (n1 <= n2 && n1 <= n3)
    {
        printf("\nN1 Is  %d  Smallest Number.", n1);
    }
    else if (n2 <= n1 && n2 <= n3)
    {
        printf("\nN2 Is  %d  Smallest Number.", n2);
    }
    else
    {
        printf("\nN3 Is  %d  Smallest number.", n3);
    }

    printf("\n-------> Find The Biggest And Smallest Number Using Switch Case Statements");
    switch (n1 >= n2 & n1 >= n3)
    {
    case 1:
        printf("\nN1 Is  %d  Largest Number.", n1);
    case 0:
        switch (n2 >= n1 & n2 >= n3)
        {
        case 1:
            printf("\nN2 Is  %d  Largest Number.", n2);
            break;
        default:
            printf("\nN3 Is :%d  Largest number.", n3);
            break;
        }
        break;

    default:
        printf("Invalid Operaters...!");
        break;
    }
    switch (n1 <= n2 & n1 <= n3)
    {
    case 1:
        printf("\nN1 Is  %d  Smallest Number.", n1);
        break;
    case 0:
        switch (n2 <= n1 & n2 <= n3)
        {
        case 1:
            printf("\nN2 Is  %d  Smallest Number.", n2);
            break;
        default:
            printf("\nN3 Is :%d  Smallest number.", n3);
            break;
        }
        break;
    default:
        printf("Invalid Operaters...!");
        break;
    }
    return 0;
}