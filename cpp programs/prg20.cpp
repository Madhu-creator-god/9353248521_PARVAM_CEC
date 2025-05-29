/*c++ program for matrix addition using 2 dimentional array*/
#include <iostream>
using namespace std;
int main() {
    int a[10][10], b[10][10], c[10][10], i, j, m, n;
    cout << "Enter the number of rows and columns: ";
    cin >> m >> n;
    cout << "Enter elements of first matrix:\n";
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    cout << "Enter elements of second matrix:\n";
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            cin >> b[i][j];
        }
    }
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    cout << "matrix after addition "<< endl;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}