/**/
#include <iostream>
using namespace std;
int main()  
{
    int number=30;
    int *p;
    p=&number; // pointer p points to the address of number
    cout << "address of number variables: " << &number << endl;
    cout << "address of pointer p variables: " <<p<< endl;
    cout << "value of pointer p: " <<*p<< endl;
    return 0;
}
