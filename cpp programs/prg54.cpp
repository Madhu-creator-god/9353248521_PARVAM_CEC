//expectional handling 2
#include <iostream>
using namespace std;
int main()
{
   int num,den;
   cout<<"enter 2 numbers: "<<endl;
    cin>>num>>den;
    try
    {
        if(den==0)
        throw(den);
        else
        cout<<num/den;
    }
    catch(int d)
    {
        cout<<"division by zero error:cannot divide by "<<d<<endl;
    }
    return 0;
};