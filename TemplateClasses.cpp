#include <iostream>
using namespace std;

// Template Class
template <class T>
class Rectangle {
private:
    T length;
    T width;
public:
    void setDimensions(T l, T w) {
        length = l;
        width = w;
    }

    T area() {
        return length * width;
    }

    void display() {
        cout << "Length: " << length << ", Width: " << width 
             << ", Area: " << area() << endl;
    }
};

int main() {
    Rectangle<int> r1;
    r1.setDimensions(5, 10);
    r1.display();

    Rectangle<double> r2;
    r2.setDimensions(3.5, 2.5);
    r2.display();

    return 0;
}
