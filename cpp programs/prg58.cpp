//sort the array in the odd index spaces{13,7,6,4,3,15,18,20}
#include <iostream>
using namespace std;

int main() 
{
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;

    int arr[size];
    cout << "Enter the elements: ";
    for (int i = 0; i < size; i++)
     {
        cin >> arr[i];
    }
    cout << "Elements at odd indices: ";
    for (int i = 1; i < size; i += 2)
     {
        cout << arr[i] << " ";
    }

    return 0;
}