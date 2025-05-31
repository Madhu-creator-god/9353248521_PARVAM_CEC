//expectional handling 4
#include <iostream>
using namespace std;
class LinearSearch 
{
    private:
        int a[10], loc, i, flag, key;
    public:
        void getdata()
        {
            for(i=0;i<10;i++)
            {
                cout << "Enter elements of the array : "<<endl;
                for (i=0;i<10;i++)
                    cin >> a[i];
            }
            cout << "Enter the element to be searched: ";
            cin >> key;
        }
        void search()
        {
            flag=0;
            for(i=0;i<10;i++)
            {
                if(a[i]==key)
                {
                    loc=i;
                    flag=1;
                    break;
                }
            }
            if(flag==1)
                cout << "Element found at position: " << loc << endl;
            else
                cout << "Element not found in the array." << endl;
        }
};

int main()
{
    LinearSearch obj;
    obj.getdata();
    obj.search();
    return 0;
}