//exceptional handling 1
#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    try {
        if (age < 18) {
            throw age; // exception for age less than 18
        } else {
            cout << "Access granted." << endl;
        }
    } catch (int a) {
        cout << "Access denied. Age must be 18 or older." << endl;
        cout << "You entered: " << a << endl;
    }

    return 0;
}