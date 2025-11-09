#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the range (e.g., 10 for numbers 1 to 10): ";
    cin >> n;

    cout << "\nEven Numbers between 1 and " << n << " are: ";
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0)
            cout << i << " ";
    }

    cout << "\n\nFactorial of each number from 1 to " << n << ":\n";
    for (int i = 1; i <= n; i++) {
        int fact = 1;
        for (int j = 1; j <= i; j++) {
            fact *= j;
        }
        cout << "Factorial of " << i << " = " << fact << endl;
    }

    return 0;
}
