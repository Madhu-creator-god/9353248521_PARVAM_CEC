/*7.multiple object of a class 
create a class Employee and make three objects ; store and display date for three different employee  using each object*/
#include <iostream>
using namespace std;
class Employee {
    private:
        string name;
        int id;
        double salary;
    public:
    void setdata(string n,int i,double s)
    {
        name = n;
        id = i;
        salary = s;
    }
    void display() {
        cout << "Name: " << name << ", ID: " << id << ", Salary: " << salary << endl;
    }
    };
    int main() {
        Employee emp1, emp2, emp3;
        emp1.setdata("Alice", 101, 50000);
        emp2.setdata("Bob", 102, 60000);
        emp3.setdata("Charlie", 103, 70000);
        cout << "Employee 1: ";
        emp1.display();
        cout << "Employee 2: ";
        emp2.display();
        cout << "Employee 3: ";
        emp3.display();
        return 0;
    }