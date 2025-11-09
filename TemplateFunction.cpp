#include <iostream>
using namespace std;

// Template Function
template <typename T>
T findMax(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    cout << "Max of 5 and 10: " << findMax<int>(5, 10) << endl;
    cout << "Max of 3.5 and 2.5: " << findMax<double>(3.5, 2.5) << endl;
    cout << "Max of 'A' and 'Z': " << findMax<char>('A', 'Z') << endl;

    return 0;
}
