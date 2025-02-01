#include <iostream>
using namespace std;
class Complex{
    int a,b;
    public:
    Complex(int, int);
    void print(){
        cout << "Complex Num is: "<< a <<" + "<< b<<"i" <<endl;
    }
}; Complex :: Complex(int x, int y){  // Parameterized constructor
    a = x;
    b = y;
}
int main(){
    Complex a(2, 4); // Implicit Call
    Complex b = Complex(5, 8); // Explicit call
    a.print();
    b.print();
    return 0;
}