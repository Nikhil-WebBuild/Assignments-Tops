// POP vs. OOP Comparison Program 
// o Write two small programs: one using Procedural Programming (POP) to calculate the area of a rectangle,
//  and another using Object-Oriented Programming (OOP) with a class and object for the same task. 
// o Objective: Highlight the difference between POP and OOP approaches
#include <iostream>
using namespace std;
//POP
int area(int length, int breadth)
{
    return length * breadth;
}
//OOP
class Rectangle
{
    public:
    int length;
    int breadth;
    int area()
    {
        return length * breadth;
    }
};
int main()
{
    //POP
    int length = 10;
    int breadth = 5;
    cout<<"Area of rectangle using POP: "<<area(length, breadth)<<endl;
    //OOP
    Rectangle r;
    r.length = 10;
    r.breadth = 5;
    cout<<"Area of rectangle using OOP: "<<r.area()<<endl;
    return 0;
}
