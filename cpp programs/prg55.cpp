//expectional handling 3
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> a = {10,20,30};
    try
    {
        cout<<a.at(5);
    
    }
    catch(out_of_range e)
    {
        cout<<"caugth:"<<e.what();
    }
    return 0;
};