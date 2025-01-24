// Variables and Constants o Write a C++ program that demonstrates the use of variables and constants. 
// Create variables of different data types and perform operations on them. 
// o Objective: Understand the difference between variables and constants.
#include <iostream>
using namespace std;
int main()
{
    //variables
    int a = 5;
    float b = 3.14;
    char c = 'A';
    bool d = true;
    //constants
    const int x = 10;
    const float y = 2.718;
    const char z = 'B';
    const bool w = false;
    //operations
    cout<<"a + x = "<<a + x<<endl;
    cout<<"b - y = "<<b - y<<endl;
    cout<<"c * z = "<<c * z<<endl;
    cout<<"d && w = "<<(d && w)<<endl;
    return 0;
}