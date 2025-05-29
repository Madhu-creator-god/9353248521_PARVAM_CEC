/*c++ program using class drivation to find the area of a square and rectangle EXAMPLE ONE*/
#include <iostream>
using namespace std;

class Polygon {
public:
    virtual void area() = 0;  // Pure virtual function
};

class Triangle : public Polygon {
public:
    void area() override {  // Overrides base class method
        float base, height;
        cout << "Enter base and height of triangle: ";
        cin >> base >> height;
        cout << "Area of triangle: " << 0.5 * base * height << " square units" << endl;
    }
};

class Rectangle : public Polygon {
public:
    void area() override {  // Overrides base class method
        float length, width;
        cout << "Enter length and width of rectangle: ";
        cin >> length >> width;
        cout << "Area of rectangle: " << length * width << " square units" << endl;
    }
};
int main() {
    Polygon* p;  // Pointer to base class
    Triangle t;
    Rectangle r;
    // Call area() using base class pointer
    p = &t;  
    p->area();

    p = &r;  
    p->area();

    return 0;
}