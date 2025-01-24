// Operator Demonstration
// o Write a C++ program that demonstrates arithmetic, relational, logical, and bitwise operators.
//  Perform operations using each type of operator and display the results.
//  o Objective: Reinforce understanding of different types of operators in C++.
#include <iostream>
using namespace std;
int main()
{
    //arithmetic operators
    int a = 10, b = 5;
    cout<<"Arithmetic Operators:"<<endl;
    cout<<"a + b = "<<a + b<<endl;
    cout<<"a - b = "<<a - b<<endl;
    cout<<"a * b = "<<a * b<<endl;
    cout<<"a / b = "<<a / b<<endl;
    cout<<"a % b = "<<a % b<<endl;
    //relational operators
    cout<<"Relational Operators:"<<endl;
    cout<<"a == b: "<<(a == b)<<endl;
    cout<<"a != b: "<<(a != b)<<endl;
    cout<<"a > b: "<<(a > b)<<endl;
    cout<<"a < b: "<<(a < b)<<endl;
    cout<<"a >= b: "<<(a >= b)<<endl;
    cout<<"a <= b: "<<(a <= b)<<endl;
    //logical operators
    bool x = true, y = false;
    cout<<"Logical Operators:"<<endl;
    cout<<"x && y: "<<(x && y)<<endl;
    cout<<"x || y: "<<(x || y)<<endl;
    cout<<"!x: "<<!x<<endl;
    //bitwise operators
    int m = 5, n = 9;
    cout<<"Bitwise Operators:"<<endl;
    cout<<"m & n: "<<(m & n)<<endl;
    cout<<"m | n: "<<(m | n)<<endl;
    cout<<"m ^ n: "<<(m ^ n)<<endl;
    cout<<"~m: "<<(~m)<<endl;
    cout<<"n << 1: "<<(n << 1)<<endl;
    cout<<"n >> 1: "<<(n >> 1)<<endl;
    return 0;
}