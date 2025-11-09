#include <iostream>
using namespace std;

int main() {
    int choice;
    char ch = 'E'; // Predefined character for vowel/consonant check
    double num1, num2;
    char op;

    cout << "Menu:\n";
    cout << "1. Check Vowel or Consonant\n";
    cout << "2. Calculator\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Checking character: " << ch << endl;
            switch (ch) {
                case 'a': case 'A':
                case 'e': case 'E':
                case 'i': case 'I':
                case 'o': case 'O':
                case 'u': case 'U':
                    cout << ch << " is a Vowel." << endl;
                    break;
                default:
                    cout << ch << " is a Consonant." << endl;
            }
            break;

        case 2:
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter an operator (+, -, *, /): ";
            cin >> op;
            cout << "Enter second number: ";
            cin >> num2;

            switch (op) {
                case '+':
                    cout << "Result: " << num1 + num2 << endl;
                    break;
                case '-':
                    cout << "Result: " << num1 - num2 << endl;
                    break;
                case '*':
                    cout << "Result: " << num1 * num2 << endl;
                    break;
                case '/':
                    if (num2 != 0)
                        cout << "Result: " << num1 / num2 << endl;
                    else
                        cout << "Error: Division by zero!" << endl;
                    break;
                default:
                    cout << "Invalid operator!" << endl;
            }
            break;

        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
