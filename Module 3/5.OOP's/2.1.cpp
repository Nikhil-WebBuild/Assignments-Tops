#include <iostream>
using namespace std;

class BankAccount {
private:
    double acno;
    double balance;

public:
    void set(double a, double b) {
        acno = a;
        balance = b;
    }

    void deposit(double d) {
        balance = balance + d;
    }

    void withdraw(double w) {
        if (w < balance) {
            balance = balance - w;
        } else {
            cout << "\nWithdrawal is not possible due to insufficient balance.";
        }
    }

    void get() {
        cout << "\nAccount no. = " << acno;
        cout << "\nBalance = " << balance << endl;
    }
};

int main() {
    BankAccount b1, b2;
    b1.set(123456, 10000);
    b2.set(789456, 25000);

    double amount;

    // User interaction for b1
    cout << "\nFor Account 1:";
    cout << "\nEnter amount to deposit: ";
    cin >> amount;
    b1.deposit(amount);

    cout << "Enter amount to withdraw: ";
    cin >> amount;
    b1.withdraw(amount);

    // User interaction for b2
    cout << "\nFor Account 2:";
    cout << "\nEnter amount to deposit: ";
    cin >> amount;
    b2.deposit(amount);

    cout << "Enter amount to withdraw: ";
    cin >> amount;
    b2.withdraw(amount);

    // Display final account details
    cout << "\nAccount details after transactions:";
    b1.get();
    b2.get();

    return 0;
}
