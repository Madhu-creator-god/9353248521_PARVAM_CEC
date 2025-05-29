/*5.protected membersprotected:
create a class base with a protected variable .derive a class a derived and use the protected variable in a public function*/
#include <iostream>
using namespace std;
class Base {

    int protectedVar;
    public:
    void setProtectedVar(int value) 
    {
        protectedVar = value; 
        }
    void displayProtectedVar()
     {
        cout << "Protected Variable: " << protectedVar << endl;
    }
};
class Derived : public Base {
    public:
    void displayProtectedVar() {
        cout << "derived class protected variable "<< protectedVar << endl; 
    }
};
int main() {
    Derived d;
    d.setProtectedVar(42); 
    d.displayProtectedVar();
    return 0;
}