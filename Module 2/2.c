// Write a C program that includes variables, constants, and comments. Declare and use different data types (int, char, float) and display their values.
#include <stdio.h>
#define n1 20//const
int main()
{
    printf("The Intger Numerical Value Of N1 Is: %d", n1);
    printf("\n");
    float n2;// parameter type and parameter name 
    printf("\nEnter Float The Numerical Value Of N2:\t");
    scanf("%f", &n2);
    printf("The Float Numerical Value Of N2 Is: %.2f", n2);
    printf("\n");
    char const c = 'A';//const decalration
    printf("\nThe Character  Of c Is: %c", c);

    return 0;
}