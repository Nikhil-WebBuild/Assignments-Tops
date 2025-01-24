// Inheritance Example
// o Write a program that implements inheritance using a base class Person and derived
// classes Student and Teacher. Demonstrate reusability through inheritance.
// o Objective: Learn the concept of inheritance.
#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    Person() {}  // Default constructor
    Person(const string &name, int age) {
        this->name = name;
        this->age = age;
    }
    virtual void input() {
        cout << "Enter name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter age: ";
        cin >> age;
    }
    virtual void display() {
        cout << "\nName: " << name;
        cout << "\nAge: " << age;
    }
};

class Student : public Person {
private:
    string studentId;
    float gpa;

public:
    void input() override {
        Person::input();
        cout << "Enter student ID: ";
        cin.ignore();
        getline(cin, studentId);
        cout << "Enter GPA: ";
        cin >> gpa;
    }
    void display() override {
        Person::display();
        cout << "\nStudent ID: " << studentId;
        cout << "\nGPA: " << gpa;
    }
};

class Teacher : public Person {
private:
    string subject;
    double salary;

public:
    void input() override {
        Person::input();
        cout << "Enter subject: ";
        cin.ignore();
        getline(cin, subject);
        cout << "Enter salary: ";
        cin >> salary;
    }
    void display() override {
        Person::display();
        cout << "\nSubject: " << subject;
        cout << "\nSalary: " << salary;
    }
};

int main() {
    Student student;
    Teacher teacher;

    cout << "\nEnter Student Details:\n";
    student.input();
    
    cout << "\nEnter Teacher Details:\n";
    teacher.input();

    cout << "\n\nStudent Information:";
    student.display();
    
    cout << "\n\nTeacher Information:";
    teacher.display();
    
    cout << endl;
    return 0;
}