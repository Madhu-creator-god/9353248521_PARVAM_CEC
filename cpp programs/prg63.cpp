/*Write a program in C++ to check whether a given number is a Neon Number or not.*/
#include <iostream>
using namespace std;

int main() {
    int num, square, digitSum = 0;

    cout << "Enter a number: ";
    cin >> num;

    square = num * num;

    // Calculate sum of digits of the square
    while (square > 0) {
        digitSum += square % 10;
        square /= 10;
    }

    if (digitSum == num)
        cout << num << " is a Neon Number." << endl;
    else
        cout << num << " is not a Neon Number." << endl;

    return 0;
}