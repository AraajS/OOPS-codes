#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter how many numbers you want to check: ";
    cin >> n;

    int nums[n];

    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "\nChecking Even and Odd Numbers:\n";
    for (int i = 0; i < n; i++) {
        if (nums[i] % 2 == 0)
            cout << nums[i] << " is Even" << endl;
        else
            cout << nums[i] << " is Odd" << endl;
    }

    int min = nums[0];
    int max = nums[0];

    for (int i = 1; i < n; i++) {
        if (nums[i] < min)
            min = nums[i];
        if (nums[i] > max)
            max = nums[i];
    }

    cout << "\nMinimum Number: " << min << endl;
    cout << "Maximum Number: " << max << endl;

    return 0;
}
