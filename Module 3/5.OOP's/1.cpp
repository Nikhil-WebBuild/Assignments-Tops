// Class for a Simple Calculator
// o Write a C++ program that defines a class Calculator with functions for addition,
// subtraction, multiplication, and division. Create objects to use these functions.
// o Objective: Introduce basic classstructure.
#include <iostream> 
using namespace std;
class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    int subtract(int a, int b)
    {
        return a - b;
    }
    int multiply(int a, int b)
    {
        return a * b;
    }
    int divide(int a, int b)
    {
        return a / b;
    }
};
int main()
{
    Calculator calc;
    int a, b;
    cout << "Enter two numbers :- " << endl;
    cout << "Enter 1st value numbers: ";
    cin >> a;
    cout << "Enter 2nd value numbers: ";
    cin >> b;
    cout << "\nSum is : " << calc.add(a, b) << endl;
    cout << "Substraction is : " << calc.subtract(a, b) << endl;
    cout << "Multiplication is : " << calc.multiply(a, b) << endl;
    cout << "division is : " << calc.divide(a, b) << endl;
    return 0;
}
