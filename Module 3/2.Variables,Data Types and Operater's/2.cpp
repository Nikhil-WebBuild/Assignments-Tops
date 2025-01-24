// Type Conversion o Write a C++ program that performs both implicit and explicit type conversions and prints the results. 
// o Objective: Practice type casting in C++.
#include <iostream>
using namespace std;
int main()
{
    //implicit type conversion
    int a = 10;
    float b = a;
    cout<<"Implicit type conversion: "<<b<<endl;
    //explicit type conversion
    float c = 3.14;
    int d = (int)c;
    cout<<"Explicit type conversion: "<<d<<endl;
    return 0;
}