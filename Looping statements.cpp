#include <iostream>
using namespace std;

int main() {
    int nums[10];
    
    cout << "Enter 10 numbers: ";
    for (int i = 0; i < 10; i++) {
        cin >> nums[i];
    }

    cout << "\nPositive Numbers: ";
    for (int i = 0; i < 10; i++) {
        if (nums[i] > 0)
            cout << nums[i] << " ";
    }

    cout << "\nNegative Numbers: ";
    for (int i = 0; i < 10; i++) {
        if (nums[i] < 0)
            cout << nums[i] << " ";
    }

    cout << "\nOdd Numbers: ";
    for (int i = 0; i < 10; i++) {
        if (nums[i] % 2 != 0)
            cout << nums[i] << " ";
    }

    cout << "\nEven Numbers: ";
    for (int i = 0; i < 10; i++) {
        if (nums[i] % 2 == 0)
            cout << nums[i] << " ";
    }

    int min = nums[0];
    int max = nums[0];
    for (int i = 1; i < 10; i++) {
        if (nums[i] < min)
            min = nums[i];
        if (nums[i] > max)
            max = nums[i];
    }

    cout << "\n\nMinimum Number: " << min;
    cout << "\nMaximum Number: " << max << endl;

    return 0;
}
