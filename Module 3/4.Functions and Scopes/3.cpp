// Variable Scope
// o Write a program that demonstrates the difference between local and global
// variables in C++. Use functions to show scope.
// o Objective: Reinforce the concept of variable scope
#include <iostream>
using namespace std;
int global = 10;
void fun()
{
    int local = 5;
    cout << "Global variable: " << global << endl;
    cout << "Local variable: " << local << endl;
}
int main()
{
    fun();
    cout << "Global variable: " << global << endl;
    // cout << "Local variable: " << local << endl; // Error: local is not defined
    return 0;
}