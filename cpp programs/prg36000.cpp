#include<iostream>
using namespace std;
class A {
protected:
    int a;
public:
    void get_a() {
        std::cout << "Enter the value of 'a': " << std::endl;
        std::cin >> a;
    }
};
class B : public A {
protected:
    int b;
public:
    void get_b() {
        std::cout << "Enter the value of 'b': " << std::endl;
        std::cin >> b;
    }
};
class C {
protected:
    int c;
public:
    void get_c() {
        std::cout << "Enter the value of c is: " << std::endl;
        std::cin>>c;
    }
};