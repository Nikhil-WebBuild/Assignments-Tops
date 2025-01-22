//Write a C program to check if a number is even or odd using an if-else statement. Extend the program using a switch statement to display 
//the month name based on the user’s input (1 for January, 2 for February, etc.).
#include <stdio.h>
int main()
{
    int n1,ch;
    printf("\nOdd OR Even Number Display");
    printf("\nEnter The Numerical Value Of N1:\t");
    scanf("%d", &n1);

    printf("\n--------");
    if (n1 % 2 == 0)
    {
        printf("\n%d Is Even Number.", n1);
    }
    else
    {
        printf("\n%d Is Odd Number.", n1);
    }

    printf("\n--------");
    printf("\nUsing Swtich Case Statement Dispaly The Month");
    printf("\nEnter 1 for January");
    printf("\nEnter 2 for February");
    printf("\nEnter 3 for March");
    printf("\nEnter 4 for April");
    printf("\nEnter 5 for May");
    printf("\nEnter 6 for June");
    printf("\nEnter 7 for July");
    printf("\nEnter 8 for August");
    printf("\nEnter 9 for September");
    printf("\nEnter 10 for October");
    printf("\nEnter 11 for November");
    printf("\nEnter 12 for December");
    printf("\n\n");
    printf("Enter Your Choice:");
    scanf("%d",&ch);

    switch (ch)
    {
    case 1:
        printf("January");
        break;
    
    case 2:
        printf("February");
        break;
    case 3:
        printf("March");
        break;
    case 4:
        printf("April");
        break;
    case 5:
        printf("May");
        break;
    case 6:
        printf("June");
        break;
    case 7:
        printf("July");
        break;
    case 8:
        printf("August");
        break;
    case 9:
        printf("September");
        break;
    case 10:
        printf("October");
        break;
    case 11:
        printf("November");
        break;
    case 12:
        printf("December");
        break;
    
    default:
    printf("Invaliud Choice...!");
        break;
    }
    return 0;
}