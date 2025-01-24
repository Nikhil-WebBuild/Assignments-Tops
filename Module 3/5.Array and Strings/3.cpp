#include <iostream>
#include <string>

using namespace std;

void reverseNumber();
void reverseString();

int main()
{
    int choice;

    cout << "Choose an option:" << endl;
    cout << "1. Reverse a number" << endl;
    cout << "2. Reverse a string" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            reverseNumber();
            break;
        case 2:
            reverseString();
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}

void reverseNumber()
{
    int n, rev = 0, rem;
    cout << "Enter the number to reverse: ";
    cin >> n;
    int temp = n;

    while (n != 0)
    {
        rem = n % 10;
        rev = (rev * 10) + rem;
        n = n / 10;
    }

    cout << "Reversed number: " << rev << endl;

    if (rev == temp)
    {
        cout << temp << " is a palindrome number" << endl;
    }
    else
    {
        cout << temp << " is not a palindrome number" << endl;
    }
}

void reverseString()
{
    string str, rev;
    cout << "Enter the string to reverse: ";
    cin >> str;

    int len = str.length(); 
    rev.resize(len);        

    for (int i = 0; i < len; i++)
    {
        rev[i] = str[len - i - 1];
    }

    if (str == rev)
    {
        cout << str << " is a palindrome string" << endl;
    }
    else
    {
        cout << str << " is not a palindrome string" << endl;
    }
}
