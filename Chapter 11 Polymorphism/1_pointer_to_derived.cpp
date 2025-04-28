#include <iostream>
using namespace std;
class Base{
    public:
    int var_base;
        virtual void display(){
            cout << "Displaying Base class variable: " <<var_base<<endl;
        }
}; class Derived : public Base{
    public:
    int var_derived;
        void display(){
            cout << "Displaying Derived class variable: " <<var_derived<<endl;
            cout << "Displaying Base class variable: " <<var_base<<endl;
        }
};
int main(){
    Derived obj_derived;
    obj_derived.var_derived = 10;
    Base *ptr;
    Base obj_base;
    ptr = &obj_derived; // Pointing base class pointer to the derived class object
    ptr -> var_base = 100;
    // ptr -> var_derived = 50; // Will throw error, because it is a base class pointer...
    ptr -> display();
    cout <<endl;
    Derived *ptr2;
    ptr2 = &obj_derived; // Pointing derived class pointer to the base class object
    ptr2 -> var_derived = 55;
    ptr2 -> var_base = 76;
    ptr2 -> display();

    return 0;
}