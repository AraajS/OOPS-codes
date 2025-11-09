#include <iostream>
using namespace std;

int main() {
    int matrix[3][3]; // 3x3 matrix

    // Input elements
    cout << "Enter 9 elements for 3x3 matrix:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matrix[i][j];
        }
    }

    // Display matrix
    cout << "\n3x3 Matrix:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
