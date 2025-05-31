/*to check whether a number is prime or not*/
#include <iostream>
using namespace std;
int main()
{
    int n,i,ctr=0;
    cout<<"Enter any number:"<<endl;
    cin>>n;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            ctr++;
        }
    
        cout<<ctr<<endl;
}
    if(ctr>0)
    {
        cout<<"Not a Prime\n";
    }
    else
    {
        cout<<"it is a prime\n";
    }
    return 0;
}