/*6.object with multiple functions
create a class circle with a private radius and public functions to input the raduis and calculate the area */
#include <iostream>
using namespace std;
class Circle {
private:
    double radius;
    public:
    void setRadius(double r) {
        if (r > 0) {
            radius = r;
        } else {
            cout << "Radius must be positive." << endl;
            radius = 0; 
        }
    }
    double calculateArea() {
        return 3.14159 * radius * radius;
    }
    void displayArea() {
        cout << "Area of the circle with radius " << radius << " is: " << calculateArea() << endl;
    }
};
int main() {
    Circle c;
    double r;
    cout << "Enter radius of the circle: ";
    cin >> r;
    c.setRadius(r);
    c.displayArea();
    return 0;
}