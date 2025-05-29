/*c++ program to print A BB CCC DDDD piramid using for loop*/
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of rows for the pattern: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        char ch = 'A' + i - 1;
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << ch << " ";
        }
        cout << endl;
    }

    return 0;
}