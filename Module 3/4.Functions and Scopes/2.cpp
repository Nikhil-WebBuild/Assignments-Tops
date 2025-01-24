// Factorial Calculation Using Recursion
// o Write a C++ program that calculates the factorial of a number using recursion.
// o Objective: Understand recursion in functions.
#include <iostream>
#include <conio.h>
using namespace std;
int factorial(int n)
{
    if (n != 0)
        return n * factorial(n - 1);
    else 
        return 1;
}
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Factorial of " << n << " is " << factorial(n) << endl;
    getch();
    return 0;
}