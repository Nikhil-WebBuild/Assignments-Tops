// Write a C program that defines a structure to store a student's details (name, roll number, and marks).
// Use an array of structures to store details of 3 students and print them.
#include <stdio.h>
struct Stude_Detail
{
    char name[100];
    int roll_no;
    int marks;
};

int main()
{
    struct Stude_Detail stud[100];
    int i, size;

    printf("Enter The Size:\t");
    scanf("%d", &size);

    printf("\n");
    for (i = 0; i < size; i++)
    {
        printf("Enter The Student Name:\t");
        scanf("%s", &stud[i].name);
        printf("Enter The Student Roll Number:\t");
        scanf("%d", &stud[i].roll_no);
        printf("Enter The Student All Over Subject Marks:\t");
        scanf("%d", &stud[i].marks);
        printf("\n");
    }

    printf("\n\nHere, Display The Students Details:");
    for (i = 0; i < size; i++)
    {
        printf("\n%d.", i + 1);
        printf("\nStudent Name: %s ", stud[i].name);
        printf("\nStudent Roll Number: %d ", stud[i].roll_no);
        printf("\nStudent All Over Subject Marks: %d ", stud[i].marks);
        printf("\n-----------");
    }

    return 0;
}