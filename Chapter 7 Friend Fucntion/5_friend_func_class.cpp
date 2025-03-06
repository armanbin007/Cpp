#include <iostream>
using namespace std;
class Base{
    float d1, d2;
    public:
        void setValue(float x, float y){
            d1 = x;
            d2 = y;
        } friend void add(Base);
        friend class Calc;
}; void add(Base o1){
    cout <<"Sum = "<<o1.d1 + o1.d2<<endl;
} class Calc{
    public:
        void mul(Base o1){
    cout <<"Multiplication = "<<o1.d1 * o1.d2<<endl;
   }
        void div(Base o1){
    cout <<"Division = "<<o1.d1 / o1.d2<<endl;
   }
};
int main(){
    Base o1;
    o1.setValue(10, 2);
    add(o1);
    Calc o2;
    o2.mul(o1);
    o2.div(o1);
    return 0;
}