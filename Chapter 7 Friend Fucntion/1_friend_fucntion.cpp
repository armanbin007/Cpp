#include <iostream>
using namespace std;
class Complex{
    int a,b;
    public:
        void setNumber(int x, int y){
            a = x;
            b = y;
        } friend Complex sumComplex(Complex o1, Complex o2); // Jus declared...Not a member of class!!!
          void print(){
            cout << "Complex num is: "<<a<<" + "<<b<<"i"<<endl;
        }
}; // Below line means that non member - sumComplex funtion is allowed to do anything with my private data (members)
    Complex sumComplex(Complex o1, Complex o2){
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
int main(){
    Complex c1, c2, sum;
    c1.setNumber(1, 4);
    c1.print();
    c2.setNumber(5, 8);
    c2.print();

    sum = sumComplex(c1, c2);
    sum.print();
    
    return 0;
}