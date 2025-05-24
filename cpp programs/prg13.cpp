/*using switch case to chose bettween simple interest and compound from user       */
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int choice;
    float principal, rate, time, interest;
    int n;

    cout << "Choose 1 for Simple Interest or 2 for Compound Interest: ";
    cin >> choice;

    cout << "Enter Principal Amount: ";
    cin >> principal;
    cout << "Enter Rate of Interest: ";
    cin >> rate;
    cout << "Enter Time (in years): ";
    cin >> time;

    switch (choice) {
        case 1:
            interest = (principal * rate * time) / 100;
            cout << "Simple Interest = " << interest << endl;
            break;
        case 2:
            cout << "Enter number of times interest applied per time period: ";
            cin >> n;
            interest = principal * (pow((1 + rate / (n * 100)), n * time) - 1);
            cout << "Compound Interest = " << interest << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
            break;
    }

    return 0;
}