// Array Sum and Average
// o Write a C++ program that accepts an array of integers, calculates the sum and
// average, and displays the results.
// o Objective: Understand basic array manipulation.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    cout << "The sum of the elements of the array is: " << sum << endl;
    cout << "The average of the elements of the array is: " << (float)sum / n << endl;
    return 0;
}