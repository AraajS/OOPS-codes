#include <iostream>
using namespace std;

// Base class
class BankAccount {
protected:
    string accountNumber;
    double balance;
public:
    void setAccount(string acc, double bal) {
        accountNumber = acc;
        balance = bal;
    }
    void displayAccount() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: $" << balance << endl;
    }
};

// Derived class
class SavingsAccount : public BankAccount {
private:
    double interestRate;
public:
    void setInterest(double rate) {
        interestRate = rate;
    }
    void applyInterest() {
        balance += balance * interestRate / 100;
    }
    void displaySavings() {
        displayAccount();
        cout << "Interest Rate: " << interestRate << "%" << endl;
    }
};

int main() {
    SavingsAccount sa;
    sa.setAccount("SA12345", 1000);
    sa.setInterest(5); // 5% interest
    sa.applyInterest();
    sa.displaySavings();

    return 0;
}
