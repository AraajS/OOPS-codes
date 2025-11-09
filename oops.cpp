#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {
        cout << i << " ";
    }
    cout << endl;


//to print odd numb b/w 1-20

    for (int i = 1; i <= 20; i++) {
        if (i % 2 != 0) { // Check if number is odd
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
