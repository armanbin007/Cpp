#include <iostream>
using namespace std;
class Base{
    public:
    int var_base = 10;
        virtual void display(){
            cout << "1. Displaying Base class variable: " <<var_base<<endl;
        }
}; class Derived : public Base{
    public:
    int var_derived = 20;
        void display(){
            cout << "2. Displaying Derived class variable: " <<var_derived<<endl;
            cout << "2. Displaying Base class variable: " <<var_base<<endl;
        }
};
int main(){
    Base *ptr1, obj_base;
    Derived *ptr2, obj_derived;
    ptr1 = &obj_derived;
    ptr1 -> display();  // Here it used derived class function because base class func is virtual
    return 0;
}