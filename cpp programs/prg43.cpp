/*3.constructor initialization
create a class student that takes name and roll number as constructor */
#include <iostream>
using namespace std;
class Student {
private:
    string name;
    int rollNumber;
public:

    Student(string n, int r) {
        name = n;
        rollNumber = r;
    }
    void display() {
        cout << "Name: " << name << ", Roll Number: " << rollNumber << endl;
    }
};

int main() {
    string name;
    int rollNumber;

    cout << "Enter name: ";
    cin >> name;
    cout << "Enter roll number: ";
    cin >> rollNumber;

    Student student(name, rollNumber);
    student.display();

    return 0;