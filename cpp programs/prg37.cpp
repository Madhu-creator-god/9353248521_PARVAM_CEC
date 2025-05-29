#include<iostream>
using namespace std;

class Employee
{
    public:
        Employee()  // Constructor
        {
            cout << "Default constructor called" << endl;
        }
        
        ~Employee()  // Destructor
        {
            cout << "Destructor evoked\n";
        }
};

int main(void)
{
    cout << "In main function\n";
    
    cout << "1st object created\n";
    Employee e1;

    cout << "2nd object created\n";
    Employee e2;

    cout << "End of main function\n";
    
    return 0;
}
