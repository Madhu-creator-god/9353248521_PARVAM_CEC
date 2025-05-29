/*c++ program to print * space in bettween them in the shape rectangle using for loop */
#include <iostream>
using namespace std;
int main() {
    int rows, columns;

    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> columns;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (j % 2 == 0) {
                cout << "* ";
            } else {
                cout << "  "; 
            }
        }
        cout << endl;
    }

    return 0;
}