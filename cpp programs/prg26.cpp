/*c++ program to print A BB CCC DDDD right angle triangle using for loop*/
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of rows for the pattern: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        char ch = 'A' + i - 1;
        for (int j = 1; j <= i; j++) {
            cout << ch << " ";
        }
        cout << endl; 
    }
    return 0;
}

