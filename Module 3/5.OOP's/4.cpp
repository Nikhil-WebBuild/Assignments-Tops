// Inheritance Example
// o Write a program that implements inheritance using a base class Person and derived
// classes Student and Teacher. Demonstrate reusability through inheritance.
// o Objective: Learn the concept of inheritance.
#include <iostream>
using namespace std;
class Person
{
    public:
    void display()
    {
        cout<<"Person Display"<<endl;
    }
};
class Student : public Person
{
    public:
    void display1()
    {
        cout<<"Student Display"<<endl;
    }
};
class Teacher : public Person
{
    public:
    void display2()
    {
        cout<<"Teacher Display"<<endl;
    }
};
int main()
{
    Student s;
    Teacher t;
    s.display();
    s.display1();
    t.display();
    t.display2();
    return 0;
}
