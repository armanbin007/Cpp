#include <iostream>
using namespace std;
class Complex{
    int a, b;
    public:
    Complex(){  // Using multiple constructor is called constructor overloading
        a = 0;
        b = 0;
    } Complex(int x){
        a = x;
        b = 0;
    } Complex(int x, int y){
        a = x;
        b = y;
    } void print(){
        cout <<"Complex number is: "<<a<<" + "<<b<<"i"<<endl;
    }
};
int main(){
    Complex o1;
    Complex o2(4);
    Complex o3(2, 5);
    o1.print();
    o2.print();
    o3.print();
    return 0;
}
