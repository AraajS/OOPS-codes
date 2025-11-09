#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountNumber;
    double balance;

public:
    // Member function to set account details using 'this' pointer
    void setAccount(string accountNumber, double balance) {
        this->accountNumber = accountNumber;  // distinguish between local and member variables
        this->balance = balance;
    }

    // Member function to deposit money (returns current object for chaining)
    BankAccount* deposit(double amount) {
        this->balance += amount;
        return this; // returning current object
    }

    // Display account details
    void display() {
        cout << "Account Number: " << this->accountNumber << endl;
        cout << "Balance: $" << this->balance << endl;
    }
};

int main() {
    BankAccount acc;

    // Using 'this' pointer indirectly inside member functions
    acc.setAccount("ACC12345", 1000);

    // Chaining method calls using returned 'this' pointer
    acc.deposit(500)->deposit(250);

    acc.display();

    return 0;
}
