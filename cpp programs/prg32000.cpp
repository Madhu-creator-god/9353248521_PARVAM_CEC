#include <iostream>
using namespace std;
class Animal
{
public:
void eat(){
cout<<"Eating..."<<endl;
}
};
class Dog: public Animal
{
public:
void bark(){
cout<<"Barking...";
}
};
class Cat: public Animal
{
public:
void meo(){
cout<<"meo meo"<<endl;
}
}
int main(void)
 {
Dog d1; Cat c1;
d1.eat();
d1.bark();
cl.meo();
c1.eat();
return 0;
}