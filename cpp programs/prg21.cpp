/*c++ for multiplication of two matrices using 2 dimensional array*/
#include<iostream> 
#include<math.h>
using namespace std;
int main() {
    int a[10][10], b[10][10], c[10][10], i, j, k, m, n, p;
    cout << "Enter the number of rows and columns for first matrix: ";
    cin >> m >> n;
    cout << "Enter elements of first matrix:\n";
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    cout << "Enter the number of columns for second matrix: ";
    cin >> p;
    cout << "Enter elements of second matrix:\n";
    for (i = 0; i < n; i++) {
        for (j = 0; j < p; j++) {
            cin >> b[i][j];
        }
    }
    for (i = 0; i < m; i++) {
        for (j = 0; j < p; j++) {
            c[i][j] = 0;
        }
    }
    for (i = 0; i < m; i++) {
        for (j = 0; j < p; j++) {
            for (k = 0; k < n; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    cout << "matrix after multiplication:\n";
    for (i = 0; i < m; i++) {
        for (j = 0; j < p; j++) {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}