#include <iostream>
using namespace std;
class number{
    int a;
    public:
    number(){}
    number(int x){
        a = x;
    } 
    number(number &obj){
        cout << "Copy constructor called!!!" <<endl;
        a = obj.a;
    } 
    void display(){
        cout << "The num of this obj is : "<< a <<endl;
    }
};
int main(){
    number x, z(45), z2;
    x.display(); 
    z.display();
    z2 = z; // Here it is just assigned no copy constructor was invoked!!!
    z2.display(); // Copy constructor wasn't called
    number z1(z); // Copy constructor invoked
    z1.display(); 
    number z3 = z; // Copy constructor invoked
    z3.display();
    return 0;
}