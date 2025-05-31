/* create the program to revers the string and check weather it is a palandrome or not*/
#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    string reversedStr = string(str.rbegin(), str.rend());

    cout << "Reversed string: " << reversedStr << endl;

    if (str == reversedStr) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}