#include<iostream>
using namespace std;
int main()
{
    int i,n,sum=0;
    cout<<"enter the n numbers";
    cin>>n;
    for(i=0;i<=n;i++)
    {
        sum=sum+i;
        cout<<"sum :"<<sum<<"\n";
    }
    cout<<" Total sum : "<<sum<<"\n";
return 0;
}