/*find the given number is emirp number or not
A NUMBER IS CALLED AN EMIRP NUMBER IF WE GET ANOTHER PRIME NUMBER ON REVERSING THE NUMBER ITSELF.
IN OTHER WORDS, AN EMITIP NUMBER IS A NUMBER THAT IS PRIME FORWARDS OR BACKWARDS.
IT IS ALSO KONWN AS TWISTED PRIME NUMBER.*/
#include <iostream>
#include <cmath>
using namespace std;
// Function to check if a number is prime
bool isPrime(int num) 
{
    if (num < 2) return false;
    for (int i = 2; i <= sqrt(num); i++)
        if (num % i == 0) return false;
    return true;
}
// Function to reverse a number
int reverseNumber(int num) 
{
    int reversed = 0;
    while (num)
     {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed;
}
int main()
 {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isPrime(n) && isPrime(reverseNumber(n)) && n != reverseNumber(n))
        cout << n << "yes,the given number is an Emirp number.\n";
    else
        cout << n << " is not an Emirp number.\n";

    return 0;
}