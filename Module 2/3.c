// Write a C program that accepts two integers from the user and performs arithmetic, relational, and logical operations on them. Display the results.
#include <stdio.h>
int main()
{
    int n1, n2;
    printf("Enter The Numerical Value Of N1:\t");
    scanf("%d", &n1);
    printf("Enter The Numerical Value Of N2:\t");
    scanf("%d", &n2);

    printf("\n------------------------");
    // Arethmatic Operaters
    printf("\nArithmeric Operaters");
    printf("\nThe Addition Of  %d and  %d is : %d", n1, n2, n1 + n2);
    printf("\nThe Subtraction Of  %d and  %d is : %d", n1, n2, n1 - n2);
    printf("\nThe Multiplication Of  %d and  %d is : %d", n1, n2, n1 * n2);
    printf("\nThe Division Of  %d and  %d is : %d", n1, n2, n1 / n2);
    printf("\nThe Modulo Of  %d and  %d is : %d", n1, n2, n1 % n2);

    printf("\n-------------------------");
    // Relational Operaters
    printf("\nRelational Operaters");
    printf("\nThe Eqale Relational Operaters Of  %d ==  %d : %s ", n1, n2, (n1 == n2) ? "True" : "False");
    printf("\nThe Not Eqale Relational Operaters Of Of  %d !=  %d : %s ", n1, n2, (n1 != n2) ? "True" : "False");
    printf("\nThe Greater Than Relational Operaters Of Of  %d >  %d: %s ", n1, n2, (n1 > n2) ? "True" : "False");
    printf("\nThe Less Than Relational Operaters Of Of  %d <  %d : %s ", n1, n2, (n1 < n2) ? "True" : "False");

    printf("\n-------------------------");
    // Logical Operaters
    printf("\nLogical Operaters");
    printf("\nThe && Logical Operaters Of  %d > 0 &&  %d> 0 : %s ", n1, n2, (n1 > 0 && n2 > 0) ? "True" : "False");
    printf("\nThe || Eqale Logical Operaters Of Of  %d > 0 ||  %d > 0 : %s", n1, n2, (n1 > 0 || n2 > 0) ? "True" : "False");
    printf("\nThe ! Logical Operaters Of Of  %d > 0 ! %d > 0 %s ", n1, n2, !(n1 > 0) ? "True" : "False");

    return 0;
}