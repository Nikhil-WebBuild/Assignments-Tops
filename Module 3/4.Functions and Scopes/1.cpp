// Simple Calculator Using Functions
// o Write a C++ program that defines functions for basic arithmetic operations (add,
// subtract, multiply, divide). The main function should call these based on user input.
// o Objective: Practice defining and using functions in C++.
#include <iostream.h>
#include <conio.h>
void add(int a, int b)
{
    cout << "Sum is: " << a + b << endl;
}
void subtract(int a, int b)
{
    cout << "Substraction is: " << a - b << endl;
}
void multiply(int a, int b)
{
    cout << "multiply is: " << a * b << endl;
}
void divide(int a, int b)
{
    cout << "divide answer is: " << a / b << endl;
}
void main()
{
    clrscr();
    int a, b;
    char operaters;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Enter operation (+, -, *, /): ";
    cin >> operaters;
    switch (operaters)
    {
    case '+':
        add(a, b);
        break;
    case '-':
        subtract(a, b);
        break;
    case '*':
        multiply(a, b);
        break;
    case '/':
        divide(a, b);
        break;
    default:
        cout << "Invalid operation" << endl;
    }
    getch();
}
