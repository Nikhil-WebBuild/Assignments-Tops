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
    double acno, balance, amount;

    // User interaction for b1
    cout << "\nEnter account number for Account 1: ";
    cin >> acno;
    cout << "Enter initial balance for Account 1: ";
    cin >> balance;
    b1.set(acno, balance);

    cout << "\nFor Account 1:";
    cout << "\nEnter amount to deposit: ";
    cin >> amount;
    b1.deposit(amount);

    cout << "Enter amount to withdraw: ";
    cin >> amount;
    b1.withdraw(amount);

    // User interaction for b2
    cout << "\nEnter account number for Account 2: ";
    cin >> acno;
    cout << "Enter initial balance for Account 2: ";
    cin >> balance;
    b2.set(acno, balance);

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
