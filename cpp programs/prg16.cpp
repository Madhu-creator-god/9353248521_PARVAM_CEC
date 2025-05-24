#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,i,digit,revnum=0;
    cout<<"enter the numbers";
    cin>>n;
    while(n>0)
    {
        
        digit=n%10;
        cout<<"digit="<<digit<<"\n";
        n=n/10;
        revnum=revnum*10+digit;
        cout<<"revnum="<<revnum<<"\n";
    }
    return 0;
}