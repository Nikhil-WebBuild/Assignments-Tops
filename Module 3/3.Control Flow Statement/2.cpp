// Number Guessing Game
// o Write a C++ program that asks the user to guess a number between 1 and 100. The
// program should provide hints if the guess is too high or too low. Use loops to allow
// the user multiple attempts.
#include <iostream>
using namespace std;
int main()
{
    int number = 50;
    int guess;
    int attempts = 0;
    cout << "Guess the number between 1 and 100: ";
    cin >> guess;
    while (guess != number)
    {
        if (guess > number)
        {
            cout << "Too high! Try again: ";
        }
        else
        {
            cout << "Too low! Try again: ";
        }
        cin >> guess;
        attempts++;
    }
    cout << "Congratulations! You guessed the number in " << attempts << " attempts." << endl;
    return 0;
}