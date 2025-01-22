#include <stdio.h>
int main()
{
    int n1, n2;
    char ch, temp = '%';
    printf("Enter The Number N1:\t");
    scanf("%d", &n1);
    printf("\nEnter The Number N2:\t");
    scanf("%d", &n2);

    printf("--------------");
    printf("\nEnter '+' For Addition Of N1 & N2");
    printf("\nEnter '-' For Subtraction Of N1 & N2");
    printf("\nEnter '*' For Multiplication Of N1 & N2");
    printf("\nEnter '/' For Division Of N1 & N2");
    printf("\nEnter '%c' For Reminder Of N1 & N2", temp);
    printf("\n\n Enter Your Choice:\t");
    scanf(" %c", &ch);

    switch (ch)
    {
    case '+':
        printf("The Addition Of  %d & %d Is: %d", n1, n2, n1 + n2);
        break;

    case '-':
        printf("The Subtraction Of  %d & %d Is: %d", n1, n2, n1 - n2);
        break;

    case '*':
        printf("The Multiplication Of  %d & %d Is: %d", n1, n2, n1 * n2);
        break;

    case '/':
        printf("The Division Of  %d & %d Is: %.2f", n1, n2, (float)n1 / (float)n2);
        break;

    case '%':
        printf("The Reminder Of  %d & %d Is: %f", n1, n2, n1 % n2);
        break;

    default:
        printf("\nInvalid Operater....!");
        break;
    }
    return 0;
}