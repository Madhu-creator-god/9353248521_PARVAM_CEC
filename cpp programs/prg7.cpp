#include<iostream>
using namespace std;
int main()
{
    int i,n,fact=1;
    cout<<"enter the n numbers";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
        cout<<"factorial :"<<fact<<"\n";
    }   
    cout<<" Total factorial : "<<fact<<"\n";
return 0;
}