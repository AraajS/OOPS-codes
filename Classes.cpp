#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountNumber;
    string accountHolder;
    double balance;

public:
    // Function to set account details
    void setAccount(string accNo, string holder, double bal) {
        accountNumber = accNo;
        accountHolder = holder;
        balance = bal;
    }

    // Function to deposit money
    void deposit(double amount) {
        balance += amount;
        cout << "Deposited $" << amount << " successfully." << endl;
    }

    // Function to withdraw money
    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawn $" << amount << " successfully." << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }

    // Function to display account details
    void display() {
        cout << "\n--- Account Details ---\n";
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: $" << balance << endl;
    }
};

int main() {
    // Creating objects
    BankAccount acc1, acc2;

    // Setting account details
    acc1.setAccount("ACC1001", "Alice", 1500);
    acc2.setAccount("ACC1002", "Bob", 2000);

    // Performing transactions
    acc1.deposit(500);
    acc1.withdraw(300);
    acc1.display();

    acc2.deposit(1000);
    acc2.withdraw(2500); // Insufficient balance
    acc2.display();

    return 0;
}
