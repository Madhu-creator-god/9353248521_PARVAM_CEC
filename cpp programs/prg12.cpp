/*calculate the compound interest*/
#include <iostream>
#include <cmath> 
using namespace std;
int main()
{
    float principal, rate, time, compoundInterest;
    int n;

    cout << "Enter Principal Amount: ";
    cin >> principal;
    cout << "Enter Rate of Interest: ";
    cin >> rate;
    cout << "Enter Time (in years): ";
    cin >> time;
    cout << "Enter number of times interest applied per time period: ";
    cin >> n;

    compoundInterest = principal * (pow((1 + rate / (n * 100)), n * time) - 1);
    cout << "Compound Interest = " << compoundInterest << endl;

    return 0;
}