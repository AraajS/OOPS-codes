#include <iostream>
#include <cmath>
using namespace std;

// 1. Fibonacci Series using pointers
void fibonacci(int *n) {
    int t1 = 0, t2 = 1, nextTerm;
    cout << "\nFibonacci Series up to " << *n << " terms: ";
    for (int i = 1; i <= *n; ++i) {
        cout << t1 << " ";
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    cout << endl;
}

// 2. Palindrome Check using pointers
void palindrome(int *num) {
    int original = *num, reversed = 0, remainder;
    int temp = *num; // store value before modifying
    while (temp != 0) {
        remainder = temp % 10;
        reversed = reversed * 10 + remainder;
        temp /= 10;
    }
    cout << "\nNumber: " << original << " -> ";
    cout << ((reversed == original) ? "Palindrome" : "Not a palindrome") << endl;
}

// 3. Armstrong Number Check using pointers
void armstrong(int *num) {
    int original = *num, temp = *num, digits = 0, remainder;
    while (temp != 0) {
        temp /= 10;
        digits++;
    }
    temp = *num;
    int result = 0;
    while (temp != 0) {
        remainder = temp % 10;
        result += pow(remainder, digits);
        temp /= 10;
    }
    cout << "\nNumber: " << original << " -> ";
    cout << ((result == original) ? "Armstrong number" : "Not an Armstrong number") << endl;
}

// 4. Odd/Even Check using pointers
void oddEven(int *num) {
    cout << "\nNumber: " << *num << " -> ";
    if (*num % 2 == 0)
        cout << "Even" << endl;
    else
        cout << "Odd" << endl;
}

int main() {
    // Predefined numbers
    int fibNum = 10;      // Fibonacci terms
    int palNum = 121;     // Palindrome check
    int armNum = 153;     // Armstrong check
    int oddEvenNum = 44;  // Odd/Even check

    cout << "=== Pointer-based C++ Program ===" << endl;

    fibonacci(&fibNum);
    palindrome(&palNum);
    armstrong(&armNum);
    oddEven(&oddEvenNum);

    cout << "\n=== End of Program ===" << endl;
    return 0;
}
