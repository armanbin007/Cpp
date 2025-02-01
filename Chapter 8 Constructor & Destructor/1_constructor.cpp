#include <iostream>
using namespace std;
class Complex{
    int a,b;
    public:
    Complex();
    void print(){
        cout << "Complex Num is: "<< a <<" + "<< b<<"i" <<endl;
    }
}; Complex :: Complex(){  // Default constructor
    a = 10;
    b = 5;
}
int main(){
    Complex c1,c2;
    c1.print();
    c2.print();
    return 0;
}