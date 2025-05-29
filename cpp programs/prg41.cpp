/*1.create a simple class preson with public members name and age. use an object to set values and display them*/
#include <iostream>
using namespace std;
class Person {
public:
    string name;
    int age;

    void setValues() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};
int main() {
    Person p;
    p.setValues();
    p.display();
    return 0;
}