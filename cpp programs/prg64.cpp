/*a perfect number is a positive integer that is equal to the sum of its proper divisors 
(exclouding the number itself)
for example, 6 is a perfect number because its divisors are 1, 2, and 3,
and 1 + 2 + 3 = 6.*/
#include <iostream>
using namespace std;
int main() 
{
    int n;
    cin >>n;
    int sum = 0;
    for (int i = 1; i<= n / 2; i++) 
    {
        if (n % i == 0)
         {
            sum += i;   
        }
    }
    if (sum == n)
     {
        cout << n << " is a perfect number." << endl;
    } 
    else 
    {
        cout << n << " is not a perfect number." << endl;
    }
    
    return 0;
}