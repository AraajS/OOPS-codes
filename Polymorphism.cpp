#include <iostream>
#include <cmath>
using namespace std;

// Base class
class NumberOperation {
public:
    virtual void perform(int num) { // Virtual function for runtime polymorphism
        cout << "Performing number operation..." << endl;
    }
};

// Derived class for Fibonacci
class Fibonacci : public NumberOperation {
public:
    void perform(int num) override {
        int t1 = 0, t2 = 1, next;
        cout << "Fibonacci series up to " << num << ": ";
        for (int i = 1; i <= num; i++) {
            cout << t1 << " ";
            next = t1 + t2;
            t1 = t2;
            t2 = next;
        }
        cout << endl;
    }
};

// Derived class for Armstrong
class Armstrong : public NumberOperation {
public:
    void perform(int num) override {
        int original = num, sum = 0, digits = 0;
        int temp = num;

        // Count digits
        while (temp != 0) {
            digits++;
            temp /= 10;
        }

        temp = num;
        while (temp != 0) {
            int rem = temp % 10;
            sum += pow(rem, digits);
            temp /= 10;
        }

        if (sum == original)
            cout << num << " is an Armstrong number." << endl;
        else
            cout << num << " is not an Armstrong number." << endl;
    }
};

// Derived class for Even/Odd
class EvenOdd : public NumberOperation {
public:
    void perform(int num) override {
        if (num % 2 == 0)
            cout << num << " is Even." << endl;
        else
            cout << num << " is Odd." << endl;
    }
};

int main() {
    NumberOperation* op;
    Fibonacci fib;
    Armstrong arm;
    EvenOdd eo;

    int n = 10; // Predefined number

    // Demonstrate polymorphism
    op = &fib;
    op->perform(n);

    op = &arm;
    op->perform(n);

    op = &eo;
    op->perform(n);

    return 0;
}
