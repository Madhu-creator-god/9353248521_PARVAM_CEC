/*Find the missing number in an array of integers.
Given an array of integers from 1 to N, with one number missing, write a function to find the missing number.*/
#include <iostream>
using namespace std;
int findMissingNumber(int arr[], int n) {
    int totalSum = (n * (n + 1)) / 2;
    int sum = 0;
    for (int i = 0; i < n - 1; i++) {
        sum += arr[i];
    }
    return totalSum - sum;
}
int main() {
    int n;
    cout << "Enter the size of the array (including the missing number): ";
    cin >> n;

    int arr[n - 1];
    cout << "Enter " << n - 1 << " numbers (from 1 to " << n << "): ";
    for (int i = 0; i < n - 1; i++) {
        cin >> arr[i];
    }

    int missingNumber = findMissingNumber(arr, n);
    cout << "The missing number is: " << missingNumber << endl;

    return 0;
}