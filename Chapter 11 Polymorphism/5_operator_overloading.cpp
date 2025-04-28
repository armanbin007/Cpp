#include <iostream>
using namespace std;
class Complex{
    int r, i;
    public:
        Complex(int x, int y){
            r = x; i = y;
        } Complex operator+(Complex &x){
           return Complex(r + x.r, i + x.i);
        } Complex operator-(Complex &x){
           return Complex(r - x.r, i - x.i);
        }
        void getData(){
            cout << "Complex number is: " <<r <<" + " <<i <<"i" <<endl;
        }
};
int main(){
    Complex x1(3, 6);
    Complex x2(2, 2);
    Complex x3 = x1 + x2;
    Complex x4 = x1 - x2;
    // x1.operator++();
    // x1.getData();
    x3.getData();
    x4.getData();
    return 0;
}