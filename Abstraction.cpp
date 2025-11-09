#include <iostream>
using namespace std;

// Abstract Base Class
class Account {
protected:
    string accountNumber;
    double balance;
public:
    // Pure virtual functions – must be implemented by derived classes
    virtual void deposit(double amount) = 0;
    virtual void withdraw(double amount) = 0;
    virtual void display() = 0;

    // Function to set basic account details
    void setAccount(string accNo, double bal) {
        accountNumber = accNo;
        balance = bal;
    }
};

// Derived Class: Savings Account
class SavingsAccount : public Account {
private:
    double interestRate;
public:
    void setInterestRate(double rate) {
        interestRate = rate;
    }

    // Implementing abstract methods
    void deposit(double amount) override {
        balance += amount;
        cout << "Deposited $" << amount << " into savings account.\n";
    }

    void withdraw(double amount) override {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawn $" << amount << " from savings account.\n";
        } else {
            cout << "Insufficient balance in savings account!\n";
        }
    }

    void display() override {
        cout << "\n--- Savings Account Details ---\n";
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: $" << balance << endl;
        cout << "Interest Rate: " << interestRate << "%" << endl;
    }
};

// Derived Class: Current Account
class CurrentAccount : public Account {
private:
    double overdraftLimit;
public:
    void setOverdraftLimit(double limit) {
        overdraftLimit = limit;
    }

    // Implementing abstract methods
    void deposit(double amount) override {
        balance += amount;
        cout << "Deposited $" << amount << " into current account.\n";
    }

    void withdraw(double amount) override {
        if (amount <= balance + overdraftLimit) {
            balance -= amount;
            cout << "Withdrawn $" << amount << " from current account.\n";
        } else {
            cout << "Exceeds overdraft limit!\n";
        }
    }

    void display() override {
        cout << "\n--- Current Account Details ---\n";
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: $" << balance << endl;
        cout << "Overdraft Limit: $" << overdraftLimit << endl;
    }
};

int main() {
    // Using abstraction via pointers to base class
    Account* acc1 = new SavingsAccount();
    acc1->setAccount("SA101", 1000);
    ((SavingsAccount*)acc1)->setInterestRate(5); // Setting derived-specific property
    acc1->deposit(500);
    acc1->withdraw(200);
    acc1->display();

    Account* acc2 = new CurrentAccount();
    acc2->setAccount("CA202", 2000);
    ((CurrentAccount*)acc2)->setOverdraftLimit(500);
    acc2->deposit(300);
    acc2->withdraw(2500); // Within overdraft limit
    acc2->display();

    // Free allocated memory
    delete acc1;
    delete acc2;

    return 0;
}
