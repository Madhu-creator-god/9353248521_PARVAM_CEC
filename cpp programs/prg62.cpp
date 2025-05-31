/*Sphenic number can be checked by fact that every sphenic number will have exactly 8 divisor
So first We will try to find if the number is having exactly 8 divisors if not then simply answer is no.

If there are exactly 8 divisors then we will confirm whether the first 3 digits after 1 are prime or not.
Eg. 30 (sphenic number)
30-p*q*r(i.e p,q and rare three distinąt prime no and their product are 30)
the set of divisor is (1,2,3,5,6,10,15,30).
*/
#include <iostream>
using namespace std;
bool isPrime(int num)
 {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++)
        if (num % i == 0) return false;
    return true;
}
bool isSphenic(int n) 
{
    int count = 0; 
    for (int i = 2; i * i <= n; i++)
     {
        if (n % i == 0 && isPrime(i)) 
        {
            count++;  
            n /= i;  
        }
        if (count > 3) return false; 
    }
    if (n > 1 && isPrime(n)) count++;  
    return count == 3;  
}
int main()
 {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isSphenic(num))
        cout << num << " is a Sphenic number.\n";
    else
        cout << num << " is not a Sphenic number.\n";

    return 0;
}
