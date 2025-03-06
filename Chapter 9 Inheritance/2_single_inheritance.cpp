#include <iostream>
using namespace std;
class Base{
    int data1; // private by default and is not inheritable
    public:
    int data2;
    void setData();
    int getData1();
    int getData2();
}; void Base ::setData(){
    data1 = 10;
    data2 = 20;
} int Base::getData1(){
    return data1;
} int Base::getData2(){
    return data2;
}
class Derived : private Base{ // Visibility set to private means: all public members of base class, inherited to other class will be private members.
    int data3;
    public:
    void process(){
        setData(); // Because it is private and can't be called outside that's why we have set data in process which is a public member
        data3 = data2 * getData1();
    } void display(){
        cout << "Value of data1 is: "<<getData1() <<endl;
        cout << "Value of data2 is: "<<data2 <<endl;
        cout << "Value of data3 is: "<<data3 <<endl;
    }
};
int main(){
    Derived der;
    // der.setData(); // Can't use it because it is private in derived class
    der.process();
    der.display();
    return 0;
}