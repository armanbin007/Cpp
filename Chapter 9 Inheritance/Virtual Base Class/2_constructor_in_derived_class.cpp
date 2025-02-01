#include <iostream>
using namespace std;
class Base1{
    int data1;
    public:
        Base1(int a){
            data1 = a;
            cout << "Base1 constructor is called" <<endl;
        } void printDataBase1(void){
            cout<<"The value of data1 is "<<data1<<endl;
        }
};
class Base2{
    int data2;
    public:
        Base2(int a){
            data2 = a;
            cout << "Base2 constructor is called" <<endl;
        } void printDataBase2(void){
            cout<<"The value of data2 is "<<data2<<endl;
        }
}; class Derived : public Base1, public Base2{  // Which base constructor will be called depends on derived order (this is the class declaration)
    int derived1, derived2;
    public:
        Derived(int a, int b, int c, int d) : Base1(a), Base2(b){ // This order doesn't matter!!!
            derived1 = c;
            derived2 = d;
            cout << "Derived constructor is called" <<endl;
        } void printDataDerived(){
            cout << "The value of derived1 and derived 2 is "<< derived1<<" and "<<derived2 <<endl;
        }
};
int main(){
    Derived arman(10, 20, 30, 40);
    arman.printDataBase1();
    arman.printDataBase2();
    arman.printDataDerived();
    return 0;
}