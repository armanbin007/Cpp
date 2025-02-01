#include <iostream>
using namespace std;
// Forward declaration
class Complex;
class Calculator{
    public:
        int sumRealComplex(Complex, Complex);
        int sumCompComplex(Complex, Complex);

};  class Complex{
    int a,b;
    // Individually declaring funcs as friends
    // friend int Calculator :: sumRealComplex(Complex, Complex);
    // friend int Calculator :: sumCompComplex(Complex, Complex);

    // Declaring the entire calculator class as friend
    friend class Calculator;
    public:
        void setNumber(int x, int y){
            a = x;
            b = y;
        } void print(){
            cout << "Complex num is: "<<a<<" + "<<b<<"i"<<endl;
        }
}; int Calculator :: sumRealComplex(Complex o1, Complex o2){
        return ((o1.a + o2.a));
}  int Calculator :: sumCompComplex(Complex o1, Complex o2){
        return ((o1.b + o2.b));
    }

int main(){
    Complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(5, 7);
    Calculator calc, calc2;
    int result = calc.sumRealComplex(o1, o2);
    cout << "The sum of real number is: "<<result<<endl;

    int result2 = calc2.sumCompComplex(o1, o2);
    cout << "The sum of imaginary number is: "<<result2<<endl;
    return 0;
}