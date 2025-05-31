/*
An autobiographical number is a number that describes itself in terms of the counts of its digits.
Specifically, an n-digit autobiographical number has a digit count such that the digit at 
position k (starting from the left) 
is equal to the count of the digit k in the number.

For example, let’s take the number 21200. It has two 0s, one 1, two 2s, and zero 3s or higher digits. 
So, it is a 5-digit autobiographical number.
*/
#include <iostream>
#include <vector>
using namespace std;
int main() 
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    vector<int> digitCount(10, 0);
    int temp = n;
    while (temp > 0) 
    {
        digitCount[temp % 10]++;
        temp /= 10;
    }
    bool isAutobiographical = true;
    temp = n;
    int index = 0;
    while (temp > 0)
    {
        if (digitCount[index] != temp % 10) 
        {
            isAutobiographical = false;
            break;
        }
        temp /= 10;
        index++;
    }
    if (isAutobiographical)
     {
        cout << n << " is an autobiographical number." << endl;
    } else 
    {
        cout << n << " is not an autobiographical number." << endl;
    }
    return 0;
}