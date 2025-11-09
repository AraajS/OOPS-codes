#include <iostream>
using namespace std;

// Base class
class Person {
protected:
    string name;
    int age;
public:
    void setPerson(string n, int a) {
        name = n;
        age = a;
    }
    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class 1
class Student : public Person {
protected:
    int rollNo;
    int marks[3];
public:
    void setStudent(int r, int m1, int m2, int m3) {
        rollNo = r;
        marks[0] = m1;
        marks[1] = m2;
        marks[2] = m3;
    }
    void displayStudent() {
        cout << "Roll Number: " << rollNo << endl;
        cout << "Marks: ";
        for(int i=0; i<3; i++) {
            cout << marks[i] << " ";
        }
        cout << endl;
    }
};

// Derived class 2
class Result : public Student {
public:
    void displayResult() {
        int total = 0;
        for(int i=0; i<3; i++) {
            total += marks[i];
        }
        float percentage = total / 3.0;

        cout << "\n--- Result ---\n";
        displayPerson();
        displayStudent();
        cout << "Total Marks: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main() {
    Result r1;

    // Set person info
    r1.setPerson("Alice", 20);

    // Set student info
    r1.setStudent(101, 85, 90, 78);

    // Display full result
    r1.displayResult();

    return 0;
}
